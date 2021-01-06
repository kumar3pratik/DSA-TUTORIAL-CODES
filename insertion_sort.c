#include<stdio.h>
#include<stdlib.h>

void print(int a[],int size)
{
for(int i=0;i<size;i++)
{
    printf("%d\t",a[i]);
}
}


void insertionSort(int a[],int size)
{
    int key;
for(int i=1;i<size;i++)
{
key=a[i];
int j=i-1;
while(j>=0 && key<a[j])
{

a[j+1]=a[j];
j=j-1;


}
a[j+1]=key;


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
insertionSort(a,size);
printf("after sorting\n\n");
print(a,size);
    return 0;
}



