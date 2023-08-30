#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k=0,n,s;
    printf("enter the number of daimand rows");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
      for(s=i;s<=n;s++)
      {
        printf(" ");
      }
      for(j=0;j<=i;j++)
      {
        k++;
        printf(" %d",k);
      }  
      printf("\n");
    }
    getch();
}