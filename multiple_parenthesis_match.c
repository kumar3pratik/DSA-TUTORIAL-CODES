#include <stdio.h>
#include <stdlib.h>

struct stack
{

    int top;
    int size;
    char *arr;
};

int isEmpty(struct stack *ptr)
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

int isFull(struct stack *ptr)
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

int push(struct stack *ptr, char val)
{
    if (isFull(ptr))
    {
        return 0;
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
        return val;
    }
}

char pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        return 0;
    }
    else
    {
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
char match(struct stack *ptr)
{
char m=ptr->arr[ptr->top];
return m;
}

int parenthesisMatch(char *exp)
{
struct stack* sp=(struct stack*)malloc(sizeof(struct stack));
sp->top=-1;
sp->size=100;
sp->arr=(char*)malloc(sp->size*(sizeof(char)));

for(int i=0;exp[i]!='\0';i++)
{
   if(exp[i]=='(')
   {
       if(isFull(sp))
       {
           return 0;
       }
       else
       {
           push(sp,'(');
       }
       
   }
   else if(exp[i]=='{')
   {
       if(isFull(sp))
       {
           return 0;
       }
       else
       {
           push(sp,'{');
       }
       
   }
   else if(exp[i]=='[')
   {
       if(isFull(sp))
       {
           return 0;
       }
       else
       {
           push(sp,'[');
       }
       
   }
    else if(exp[i]==')')
   {
       if(isEmpty(sp))
       {
           return 0;
       }
       else
       {
           char  m=match(sp);
           char  p=pop(sp);
           if(m==p)
           {
               return 1;
           }
           else
           {
               return 0;
           }
           

       }
       
   }
}
if(isEmpty(sp))
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
    char * exp = "[4-6]((8){(9-8)})";
if(parenthesisMatch(exp))
{
    printf("parenthesis match\n\n");
}
else
{
    printf("parenthesis not matched");
}


    return 0;
}
