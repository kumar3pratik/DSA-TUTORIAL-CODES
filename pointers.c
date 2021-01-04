#include<stdio.h>
int main()
{
int a=10;
int *ptr=&a;

printf("\n\nvalue of a=%d",a);
printf("\n\naddress of a=%x",ptr);
printf("\n\nvalue of a=%d",*ptr);//value stored at the location pointed by the pointer
printf("\n\naddress of pointer%x",&ptr);


}