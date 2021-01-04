#include<stdio.h>

int fun(int *ptr)
{
    int s=0;
for(int i=0;i<3;i++)
{
    s=s+*(ptr+i);
    
}

return s;
}


int main()

{
int arr[3]={1,2,3};
int sum=fun(arr);
printf("sum of the elements of the array=%d",sum);



}