#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char s[20];
    int i,n,c;
    printf("enter the string :");
    gets(s);
    n=strlen(s);
    printf("%d",n);
    for(i=0;i<n/2;i++)
    {
        if(s[i]==s[n-i-1])
        c++;
    }
    if(c==i)
    {
        for(i=0;i<n;i++)
        {
        printf("%c",s[i]);
        }
    printf("  is a palindrome");
    }
    else
        printf("not a palindrome");
}