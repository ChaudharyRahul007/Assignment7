//Write a program to find the Nth term of the Fibonnaci series
#include<stdio.h>
int main()
{
    int prev=0,cur=1, next=0,n,i;
    printf("Enter A to Print Nth Number:");
    scanf("%d",&n);
    for(i=0;i<n-1;i++)
    {
        next=prev+cur;
        prev=cur;
        cur=next;
    }
    printf(" %d ",next);
    return 0;

}