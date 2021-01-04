#include <stdio.h>
#include <stdlib.h>
struct Node//creating node
{
    int data;//storing the data part
    struct Node *next;//store the address of the nest pointer
};

struct Node* add_at_begin(struct Node* head,int data)
{

struct Node * temp=head;
struct Node* ptr=malloc(sizeof(struct Node));
ptr->data=data;
temp=temp->next;
while(temp->next!=head)
{
    temp=temp->next;
}
temp->next=ptr;
ptr->next=head;
head=ptr;
return head;



}

void display(struct Node *head)
{
    int size=0;
    struct Node* temp=head;
     
     do
     {
           size=size+1;
     printf("%d\t",temp->data);
     temp=temp->next;
     } while (temp!=head);
         
    printf("current size=%d",size);
    
}

void add_at_end(struct Node* head,int data)
{

struct Node* temp=head;
struct Node* ptr=malloc(sizeof(struct Node));
ptr->data=data;
while(temp->next!=head)
{
    temp=temp->next;
}

temp->next=ptr;
ptr->next=head;

}
void insert_at_desired(struct Node* head,int data,int pos)
{
    int c=1;
    struct Node* temp=head;
struct Node* ptr=malloc(sizeof(struct Node));
ptr->data=data;
while(c!=pos-1)
{
    temp=temp->next;
    c=c+1;
}
ptr->next=temp->next;
temp->next=ptr;
}



struct Node* delete_at_begin(struct Node *head)
{
struct Node * temp=head;
struct Node * ptr=head;
struct Node * ptr1=head;
temp=temp->next;
ptr=ptr->next;
while(temp->next!=head)
{
    temp=temp->next;
}
temp->next=ptr;
ptr1->next=NULL;
head=ptr;

return head;
}

void delete_at_end(struct Node* head)
{
struct Node *temp=head;
struct Node *prev;
while(temp->next!=head)
{
prev=temp;
temp=temp->next;

}

prev->next=temp->next;
temp->next=NULL;
}

void delete_at_desired(struct Node *head,int pos)
{
    int c=1;
struct Node *temp=head;
struct Node *temp1=head;
temp1=temp1->next;
while(c!=pos-1)
{
     temp1=temp1->next;
    temp=temp->next;
   
    c=c+1;
}
temp->next=temp1->next;
temp1->next=NULL;

}













int main()
{

    struct Node *head = malloc(sizeof(struct Node));

    struct Node *second = malloc(sizeof(struct Node));

    struct Node *third = malloc(sizeof(struct Node));
    struct Node *fourth = malloc(sizeof(struct Node));

    struct Node *fifth = malloc(sizeof(struct Node));

//setting data to the nodes
    head->data = 10;
    second->data = 20;
    third->data = 30;
    fourth->data = 40;
    fifth->data = 50;

//connecting the nodes together
 head->next=second;
 second->next=third;
 third->next=fourth;
 fourth->next=fifth;
 fifth->next=head;

display(head);
   
    int d;
printf("\n\nenter the data to be inserted at the begining\n");
scanf("%d",&d);



    head=add_at_begin(head,d);
    printf("\n\ncircular linked list after insertion at the begining\n");

    display(head);
    int da1;
    printf("\n\nenter the data to be inserted at the end\n");
    scanf("%d",&da1);
    add_at_end(head,da1);
    printf("\n\nafter insertion at the end of the linked list\n");
   display(head);

printf("\n\nenter the data to be inserted at the deisred position\n");
int da2,pos;
scanf("%d",&da2);
printf("\n\nenter the position to insert at\n");
scanf("%d",&pos);

insert_at_desired(head,da2,pos);
printf("\n\nafter insertion at the desires position\n\n");
display(head);
head=delete_at_begin(head);
printf("\n\nafter deletion from the begining\n");
display(head);
printf("\n\nafter deletion at the end\n");
delete_at_end(head);
display(head);
int pos1;
printf("enter the desired position for deletion\n");
scanf("%d",&pos1);


 delete_at_desired(head,pos1);
printf("\n\n\nafter deletion from the desired position new circular linked list\n");
display(head);
    return 0;
}