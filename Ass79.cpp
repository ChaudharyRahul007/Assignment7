/*Write a program to check whether a given number is an Armstrong number
or not*/
#include<stdio.h>
#include<math.h>
int main()
{
    int n,rem,y,x,sum=0,count=0;
    printf("Enter A number to check Armstrong or not:");
    scanf("%d",&n);
    x=n;
    while(x!=0)
    {
        rem=n/10;
        count++;
    }
    y=n;
    while(y!=0)
    {
        rem=y%10;
        y=y/10;
        sum=sum+pow(rem,count);

    }
    if(n==sum)
    printf("Given Number is Armstrong: %d",sum);
    else
    printf("Given Number is not Armstrong:");
    return 0;

}
