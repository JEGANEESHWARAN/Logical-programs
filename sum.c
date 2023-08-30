#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,sum=0;
    printf("enter the number=");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        sum=i+sum;
    }
    printf("the sum of number is %d",sum);
}