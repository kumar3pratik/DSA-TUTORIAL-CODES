#include<stdio.h>

void changebyvaluez(int *a)
{
*a=345;
}



int main()
{

int p=40;
printf("p=%d\n\n",p);
changebyvaluez(&p);
printf("%d",p);


}






