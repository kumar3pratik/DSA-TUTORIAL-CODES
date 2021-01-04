#include <stdio.h>//library function
#include <stdlib.h>//library function for malloc

struct stack //declaring an structure for array implementation
{

    int size; //store size of the array
    int top;  //track position
    int *arr; //holds the base address of the dynamically allocatd of array
};

int isEmpty(struct stack *ptr)//function to know whether the stack is empty or not
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack *ptr)//functioon to check whether the stack is full ot not
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack* ptr,int data)//function to push an element in ti the stack
{
if(isFull(ptr))
{
    printf("pushing cant be done as stack is full\n\n");
}
else
{
    ptr->top++;
ptr->arr[ptr->top]=data;

}



}



int peek(struct stack* ptr,int i)//function to retrive the elements of the array
{
    int arrayind=ptr->top-i+1;
    if(arrayind<0)
    {
        printf("not a valid position\n\n");
    }
    else
    {
        return ptr->arr[arrayind];
    }
    
}


int pop(struct stack *ptr)
{
    if(isEmpty(ptr))
    {
        
        return 0;
    }
    else
    {
        int val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
    
    
    
    
}





int main()
{

    struct stack *s;//declaring a pointer type structure variable
    //we need to allocate memory awe have to keep data in the variable like top,size,arr
    s = (struct stack *)malloc(sizeof(struct stack));//allocating meory to the variable
    s->size = 5;//initialising gthe variable
    s->top = -1;//initialising the variable
    s->arr = (int *)malloc(s->size * sizeof(int)); //allocating memory for the array dynamically
    
    
push(s,167);
 push(s,267);
 push(s,673);
  push(s,647);
  push(s,675);

 
 
 printf("the array elements are as\n\n");
 for(int i=1;i<=s->top+1;i++)
 {
     printf("%d\n",peek(s,i));
 }
 
int poped=pop(s);

if(poped==0)
{
    printf("poping cannot be performed now...stack is empty\n\n");
}
else
{
    printf("element poped out is:%d\n",poped);
}
 poped=pop(s);

if(poped==0)
{
    printf("poping cannot be performed now...stack is empty\n\n");
}
else
{
    printf("element poped out is:%d\n",poped);
}
 poped=pop(s);

if(poped==0)
{
    printf("poping cannot be performed now...stack is empty\n\n");
}
else
{
    printf("element poped out is:%d",poped);
}
  
  
    return 0;
}
