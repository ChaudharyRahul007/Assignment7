//Write a program to print all Armstrong numbers under 1000
#include<stdio.h>
int main()
{
     int r,sum,n,x;
   // printf("Enter A number to check Armstrong or not:");
   // scanf("%d",&n);
   for( n=1;n<=1000;n++)
   {
       sum=0;
        x=n;
        while(n!=0)
        r=x%10;
        sum=sum+(r*r*r);
        x=x/10;
   }
        if(n==x){
            printf("%d \n",n);
        }
    
   
   return 0;

}