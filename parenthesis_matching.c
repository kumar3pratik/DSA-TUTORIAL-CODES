#include <stdio.h>//library fubction
#include <stdlib.h>//library function

struct stack//creating an stack
{
    int top;
    int size;
    char *arr;//character pointer to hold the address of the character array
};

int isEmpty(struct stack *ptr)//function to check the stack is empty or not
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

int isFull(struct stack *ptr)//function to check the stack is full or not
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

void push(struct stack *ptr, char val)//function ot push the bracks into the stack
{

    if (isFull(ptr))
    {
        printf("can not push\n\n");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
char pop(struct stack *ptr)//function ot pop the stack from the stack
{
 if(isEmpty(ptr)){
        printf("Stack Underflow! Cannot pop from the stack\n");
        return -1;
    }
    else{
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }

}
int parenthesisMatch(char *exp)//actaual implementable function
{

    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->top = -1;
    sp->size = 100;
    sp->arr = (char *)malloc(sp->size * sizeof(char));

    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
        {
            push(sp, '(');
        }
        else if (exp[i] == ')')
        {
            if (isEmpty(sp))
            {
                return 0;
            }
            
            
                pop(sp);
            
        }
    }
    if (isEmpty(sp))
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

    char *exp = "((8)(*--$$9))";//cahracter array pointer
    if(parenthesisMatch(exp))
    {
        printf("parenthesis matching\n\n");
    }
    else
    {
        printf("parenthessis not matching\n\n");
    }
    


    return 0;
}
