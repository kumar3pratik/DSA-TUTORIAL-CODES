#include<stdio.h>//library function
#include<stdlib.h>//library function
//definig the structure
struct Node{
    int data;
    struct Node * next;
};

void linkedListTraversal(struct Node *ptr)//traversal of the linked list
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next; 
    }
}

int isEmpty(struct Node* top){
    if (top==NULL){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct Node* top){
    struct Node* p = (struct Node*)malloc(sizeof(struct Node));//allocating the memory dynamically..if it happens then fine else pointer gets the null value to it
    if(p==NULL){
        return 1;
    }
    else{
        return 0;
    }
}
 
struct Node* push(struct Node* top, int x){
    if(isFull(top)){
        printf("Stack Overflow\n");
    }
    else{
        struct Node* n = (struct Node*) malloc(sizeof(struct Node));
        n->data = x;
        n->next = top;
        top = n;
        return top;
    }
}

int pop(struct Node** top){//double pointer
    if(isEmpty(*top)){
        printf("Stack Underflow\n");
    }
    else{
        struct Node* n = *top;
        *top = (*top)->next;
        int x = n->data;
        free(n);
        return x; 
    }
}

int main(){
    struct Node* top = NULL;//creating a pointer of struct node type to hold some address
    top = push(top, 78);
    top = push(top, 7);
    top = push(top, 8);
    top = push(top, 782);
    top = push(top, 73);
    top = push(top, 811);
    
    linkedListTraversal(top);

    int element = pop(&top);//we are doing it as coz we want to update the top after poping so we are passing the addresss if the tip element
    printf("Popped element is %d\n", element);
    linkedListTraversal(top);
    return 0;
}