#include<stdio.h>

int BinarySearch(int a[],int s,int search)//only fpr sorted array 
{
    int low=0,mid=0,high=s-1;
    while(low<=high)
    {
    mid=(low+high)/2;
    if(a[mid]==search)
    {
     return mid;
    }
 else if(a[mid]>search)   
 {
     high=mid-1;
 }
 else
 {
     low=mid+1;
 }
    
}
  return -1;  
}







int main()
{
    int search;
    int a[10]={1,2,3,4,5,6,7,8,67,89};//sorted array

    int size=sizeof(a)/sizeof(int);//finding the size of the array
    printf("search?\t");
    scanf("%d",&search);
    int f=BinarySearch(a,size,search);
    if(f==-1)
    {
        printf("element is not found\n");
    }
    else
    {
        printf("element is found at %d",f);
    }
    
    
}
