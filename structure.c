
#include<stdio.h>
#include<string.h>
struct student
{
char name[200];
int roll;

int marks;

};




int main()
{

struct student s[100];
int n=1;
printf("enter the data as roll no,name,marks\n");
for(int i=0;i<n;i++)
{
gets(s[i].name);
scanf("%d",&s[i].roll);

scanf("%d",&s[i].marks);


}
printf("the deatils of the candidates are:\n");

for(int i=0;i<n;i++)
{
printf("name=%s",s[i].name);
printf("\n");
printf("roll=%d\n",s[i].roll);

printf("marks=%d\n",s[i].marks);


}


}

















