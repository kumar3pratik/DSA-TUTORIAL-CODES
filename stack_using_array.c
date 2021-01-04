#include<stdio.h>
#include<stdlib.h>
struct stack
{
int size;
int top;
int *arr;//pointer holding the base address of the dynamically allocated array

};

int isEmpty(struct stack *ptr)
{
if(ptr->top==-1)
{
    return 1;
}
else
{
    return 0;
}

}



int main()
{
    // struct stack *s;
    // s->top=-1;
    // s->size=5;
    // s->arr = (int *)malloc(s->size * sizeof(int));

if(isEmpty(s))
{
    printf("stack is empty\n\n");
}
else
{
printf("stack is not empty\n\n");
    
}



}

