#include <stdio.h>
#include<stdlib.h>
struct Node
{

  int data;
  struct Node *next;
};

void
display (struct Node *head)
{
    int size=0;
  struct Node *ptr = head;
  while (ptr != NULL)
    {
        size++;
      printf ("%d\t", ptr->data);
      ptr = ptr->next;
      
    }

printf("present size=%d\n",size);

}

struct Node *
insert_at_begining (struct Node *head, int data)
{
  struct Node *x = malloc (sizeof (struct Node));
  x->data = data;

  x->next = head;

  return x;
}




void append (struct Node *head, int data)
{
  struct Node *ptr1 = malloc (sizeof (struct Node));
  struct Node *temp = head;
  ptr1->data = data;
  while (temp->next != NULL)
    {
      temp = temp->next;
    }
  temp->next = ptr1;
}


void
insert_at_position (struct Node *head, int pos, int data)
{
  int c = 1;

  struct Node *ptr1 = malloc (sizeof (struct Node));
  ptr1->data = data;
  struct Node *ptr = head;
  while (c != pos - 1)
    {

      ptr = ptr->next;
      c++;

    }
  ptr1->next = ptr->next;
  ptr->next = ptr1;


}



struct Node *
delete_at_begining (struct Node *head)
{
  struct Node *temp = head;
  temp = head->next;
  return temp;


}

void delete_at_end (struct Node *head)
{
  struct Node *temp = head;
  struct Node *prev;
  while (temp->next != NULL)
    {
      prev = temp;
      temp = temp->next;
    }
   
  prev->next = NULL;

}




void delete_at_desired(struct Node* head,int pos)
{
    int c=1;
struct Node* temp=head;
struct Node* prev;
while(c!=pos-1)
{
    prev=temp;
    temp=temp->next;
    c=c+1;
    
}

prev->next=temp->next;
temp->next=NULL;


}


int
main ()
{

//allocating memory to the nodes
  struct Node *head = malloc (sizeof (struct Node));
  struct Node *second = malloc (sizeof (struct Node));
  struct Node *third = malloc (sizeof (struct Node));
  struct Node *fourth = malloc (sizeof (struct Node));
  struct Node *fifth = malloc (sizeof (struct Node));

//entering the dtata to the nodes

  head->data = 10;
  second->data = 20;
  third->data = 30;
  fourth->data = 40;
  fifth->data = 50;

//linking elements together
  head->next = second;
  second->next = third;
  third->next = fourth;
  fourth->next = fifth;
  fifth->next = NULL;

  display (head);

//inserting new nodes
  int d;
  printf ("\n\nenter the data for insertion at the begining\n");
  scanf ("%d", &d);


  head = insert_at_begining (head, d);

  printf ("\nafter insertion at the begining\n");
  display (head);
  int d1;
  printf ("\nenter the data for insertion at the end\n");
  scanf ("%d", &d1);

  append (head, d1);
  printf ("\n\nafter insertion at the end\n");
  display (head);

  int d2;
  printf ("\nenter the data to be inserted at a desired position\n");
  scanf ("%d", &d2);

  int pos;
  printf ("\nenter the position at which insertion is to be done\n");
  scanf ("%d", &pos);

  insert_at_position (head, pos, d2);
  printf ("\nafter insertion at a desired position\n");
  display (head);


//deletion of the linked list
  head = delete_at_begining (head);
  printf ("\nafter deletion of the first node\n");
  display (head);

delete_at_end(head);
  printf ("\nafter deletion of the last node\n");
  display(head);
  
  int del_pos;
  printf("\nenter the position at which you want to delete the element\n");
  scanf("%d",&del_pos);
  delete_at_desired(head,pos);
  printf("\nafter opearation of deletion at the desired position\n");
  display(head);
  
  
  return 0;
}