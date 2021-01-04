//doubly linked list operations

#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

void display(struct Node *head)
{
    int size = 0;
    struct Node *temp = head;
    while (temp != NULL)
    {
        size = size + 1;
        printf("%d\t", temp->data);
        temp = temp->next;
    }
    printf("\t\t\tcurrent size=%d", size);
}
struct Node *insert_at_begining(struct Node *head, int data)
{
    struct Node *temp = head;
    struct Node *ptr = malloc(sizeof(struct Node));
    ptr->prev = NULL;
    ptr->data = data;
    ptr->next = temp;
    head = ptr;
    return head;
}

void insert_at_end(struct Node *head, int data)
{
    struct Node *ptr = malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = ptr;
    ptr->prev = temp->next;
    ptr->next = NULL;
}

void insert_at_desired(struct Node *head, int data, int pos)
{
    int c = 0;
    struct Node *ptr = malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *temp = head;
    struct Node *temp1 = head;
    struct Node *temp2;

    temp1 - temp1->next;
    while (c != pos - 1)
    {
        temp2 = temp;
        temp = temp->next;
        temp1 = temp1->next;
        c = c + 1;
    }
    ptr->next = temp2->next;
    ptr->prev = temp->prev;
    temp2->next = ptr;
    temp->prev = ptr;
}

struct Node *delete_at_begining(struct Node *head)
{
    struct Node *temp = head;
    temp = temp->next;
    head->next = NULL;
    temp->prev = NULL;
    head = temp;
    return head;
}

void delete_at_end(struct Node *head)
{
    struct Node *temp = head;
    struct Node *ptr;
    while (temp->next != NULL)
    {
        ptr = temp;
        temp = temp->next;
    }
    temp->prev = NULL;
    ptr->next = NULL;
}

void delete_at_desired(struct Node* head,int pos)
{
struct Node* temp=head;
struct Node* temp1=head;
struct Node* temp2;

temp1=temp1->next;
int c=1;
while(c!=pos-1)
{
    temp=temp->next;
    temp1=temp1->next;
    temp2=temp1->next;
c=c+1;
}
temp->next=temp1->next;
temp2->prev=temp1->prev;

}



int main()
{
    //creating nodes
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fifth;

    //allocating memory to the nodes dynamically

    head = malloc(sizeof(struct Node));
    second = malloc(sizeof(struct Node));
    third = malloc(sizeof(struct Node));
    fourth = malloc(sizeof(struct Node));
    fifth = malloc(sizeof(struct Node));

    //fillind data to ecah nodes

    head->prev = NULL;
    head->data = 10;
    head->next = second;

    second->prev = head;
    second->data = 20;
    second->next = third;

    third->prev = second;
    third->data = 30;
    third->next = fourth;

    fourth->prev = third;
    fourth->data = 40;
    fourth->next = fifth;

    fifth->prev = fourth;
    fifth->data = 50;
    fifth->next = NULL;

    printf("the linked list is:\n");
    display(head);

    int d1;
    printf("\n\nenter the data to be inserted at the begining\n");
    scanf("%d", &d1);

    head = insert_at_begining(head, d1);
    printf("\n\ndouble linked list after insertion at the begining\n");
    display(head);
    int d2;
    printf("\n\nenter teh data to be inserted at the end\n");
    scanf("%d", &d2);
    insert_at_end(head, d2);
    printf("\n\nafter inserting data at the end of the linked list\n");
    display(head);
    int d3, p3;
    printf("\n\nenter the data to be inserted at te desired position\n");
    scanf("%d", &d3);
    printf("\n\nenter the position for insertion\n");
    scanf("%d", &p3);
    insert_at_desired(head, d3, p3);
    printf("\n\nafter insertion of the data at desired position\n");
    display(head);

    head = delete_at_begining(head);
    printf("\n\nafter deletion from the begining \n\n");
    display(head);

    printf("\n\nafter deletion from the last element\n\n");
    delete_at_end(head);
    display(head);
int p4;
printf("\n\nenter the position to be deleted\n");
scanf("%d",&p4);

printf("\n\nafter deletion from the desired position\n");
delete_at_desired(head,p4);
display(head);

    return 0;
}