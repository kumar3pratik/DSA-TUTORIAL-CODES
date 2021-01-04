#include<stdio.h>
#include<stdlib.h>

void print(int a[],int size)
{
for(int i=0;i<size;i++)
{
    printf("%d\t",a[i]);
}
}
void bubble_sort(int a[],int size)
{int temp;
    
    for(int i=0;i<size-1;i++)
    {
     for(int j=0;j<size-1-i;j++)
    {
        if(a[j]>a[j+1])
        {
          temp=a[j]  ;
          a[j]=a[j+1];
          a[j+1]=temp;
        }
    }   
    }
    
    
}
int main()
{


int a[10],size;
printf("enter the array size\n");
scanf("%d",&size);
printf("enter the array elements\n\n");
for(int i=0;i<size;i++)
{
    scanf("%d",&a[i]);
}
print(a,size);
bubble_sort(a,size);
printf("after sorting\n\n");
print(a,size);
    return 0;
}



