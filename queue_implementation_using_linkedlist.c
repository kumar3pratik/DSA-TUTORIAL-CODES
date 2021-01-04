#include <stdio.h>
#include <stdlib.h>

struct Node
{

    int data;
    struct Node *next;
};

void display(struct Node *ptr)
{
    int size = 0;
    while (ptr != NULL)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
        size++;
    }
    printf("size=%d", size);
}

struct Node *rearend(struct Node *ptr)
{

    struct Node *backend;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    backend = ptr;
    return backend;
}

int isEmpty(struct Node *ptr, struct Node *head, struct Node *back)
{
    if (ptr == NULL || head == back)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct Node *ptr)
{
    struct Node *ptr1 = (struct Node *)malloc(sizeof(struct Node));
    if (ptr1 == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
struct Node *enqueue(struct Node *back, int data)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = data;
    back->next = temp;
    back = temp;
    return back;
}

int dequeue(struct Node* temp,struct Node* head,struct Node* back)
{

if(isEmpty(temp,head,back))
{
    return 1;
}
else
{
    temp=temp->next;
    head=temp;
    return head;
}


}



int main()

{
    //creating nodes
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fifth;

    //allocating memory to the nodes
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    fifth = (struct Node *)malloc(sizeof(struct Node));
    //feeding data in the nodes
    head->data = 10;
    second->data = 20;
    third->data = 30;
    fourth->data = 40;
    fifth->data = 50;

    //connecting nodes

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = NULL;
    struct Node *back = fourth->next;

    display(head);
    back = enqueue(back, 2100);
    back = enqueue(back, 1900);
    back = enqueue(back, 800);
    printf("\n\nafter enqueue\n");
    display(head);
    head=dequeue(head,head,back);
    printf("\n\nafter dequeue\n\n");
    display(head);
    return 0;
}
