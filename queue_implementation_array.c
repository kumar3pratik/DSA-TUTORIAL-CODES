#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int top;
    int front;
    int size;
    int *arr;
};
int isEmpty(struct queue *ptr)

{
    if (ptr->top == ptr->front)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct queue *ptr)
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
void enqueue(struct queue *ptr, int data)
{
    if (isFull(ptr))
    {
        printf("\ncannot enqueue\n\n");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = data;
    }
}

int dequeue(struct queue *ptr)
{
    if (isEmpty(ptr))
    {
        printf("\ncannot dequeue\n\n");
    }
    else
    {
        ptr->front++;
    }
}

int queueTraversal(struct queue *ptr)
{
    int size = 0;
    int trav = ptr->front;
    if (isEmpty(ptr))
    {
        printf("\nsize=0\n");
        return 1;
    }
    else
    {
        printf("\n");
        while (trav != ptr->top)
        {
            size++;
            trav++;
            printf("%d\t", ptr->arr[trav]);
        }
    }
    printf("size=%d\t", size);
}
int last_val(struct queue *ptr)
{
    int last_val = ptr->arr[ptr->top];
    return last_val;
}

int fast_val(struct queue *ptr)
{
    int fast_val = ptr->arr[ptr->front + 1];
    return fast_val;
}

int peek(struct queue *ptr, int pos)
{
    int c = 1;
    while (c != pos)
    {
        c++;
    }
    return ptr->arr[c];
}

int main()
{

    struct queue *s;
    s = (struct queue *)malloc(sizeof(struct queue));
    s->top = -1;
    s->front = -1;
    s->size = 100;
    s->arr = (int *)malloc(s->size * sizeof(int));

    enqueue(s, 89);
    enqueue(s, 892);
    enqueue(s, 894);

    queueTraversal(s);

    dequeue(s);
    printf("\nafter dequeue operation\n");
    queueTraversal(s);
    enqueue(s, 1);

    queueTraversal(s);
    printf("\nfast value=%d\n", fast_val(s));
    printf("\nlast value=%d\n", last_val(s));

    int pos;
    printf("\nenter the position to be peeked\n\n");
    scanf("%d", &pos);
    printf("\nthe data at required position=%d", peek(s, pos));
}
