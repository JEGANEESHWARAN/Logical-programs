#include<conio.h>  
#include<process.h>
main()
{
  int i,n;
  clrscr();
  printf("Enter number...");
  scanf("%d",&n);
  for(i=2;i<=n/2;i++)
  {
    if(n%i==0)
    {
    printf("Not Prime");
    getch();
    exit(0);
    }
  }
  printf("Prime ");
  getch();
}