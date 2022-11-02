//Write a program to print first N terms of Fibonacci series
#include<stdio.h>
int main()
{
    int prev=0,cur=1,next=0,n,i;
    printf("Enter a number to print Fibonacci:");
    scanf("%d",&n);
    printf("0");
    for(i=0;i<n-1;i++)
    {
        next=prev+cur;
        printf(" %d ",next);
        prev=cur;
        cur=next;
    }
    return 0;
}