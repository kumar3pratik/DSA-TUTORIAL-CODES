#include <stdio.h>
int linearSearch(int a[],int size,int element)
{
    for(int i=0;i<size;i++)
    {
        if(a[i]==element)
        {
           return i;
          
        }
        
            
        
        
    }
    return -1;
}

int main()
{
    
int a[6]={1,2,3,4,5,6};
int search;
printf("enter the element to search\t");
scanf("%d",&search);


int size=sizeof(a)/sizeof(int);

int f=linearSearch(a,size,search);
if(f==-1)
{
    printf("elemet not found\n");
}
else
{
    printf("element is found  at index %d",f);
}
    return 0;
}