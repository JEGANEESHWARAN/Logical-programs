#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
void main()
{
  char ch,buff[20];
  char key[15][10]={"void","main","while","for","continue","do","break","printf","fprintf","scanf","int","if","char","int","getch"};
  int i,j,flag;
  FILE *f1=fopen("a1.c","r");
  FILE *f2=fopen("b2.txt","w");
  clrscr();
  while((ch=fgetc(f1))!=EOF)
  {
    i=0;
    flag=0;
    if(ch=='+' || ch=='-' ||ch=='*'|| ch=='%' || ch=='^'||ch=='/'||ch=='<'||ch=='>'||ch=='='||ch=='!')
    {
       while(ch=='+' || ch=='-' ||ch=='*'|| ch=='%' || ch=='^'||ch=='/'||ch=='<'||ch=='>'||ch=='='||ch=='!')
      {
	 buff[i++]=ch;
	 ch=fgetc(f1);
      }
      buff[i]='\0';
      printf("the operator is : %s\n ",buff);
      fprintf(f2,"the operator is : %s\n ",buff);
    }
	else if(ch=='\"')
		{
			ch=fgetc(f1);
			while(ch!='\"')
			{
				buff[i++]=ch;
				ch=fgetc(f1);
			}
		buff[i]='\0';
			printf("%s is literal \n",buff);
			fprintf(f2,"%s is literal \n",buff);

		}
      else if(isdigit(ch))
		{
			while(isdigit(ch))
			{
				buff[i++]=ch;
				ch=fgetc(f1);
			}
		buff[i]='\0';
			printf("%s is number \n",buff);
			fprintf(f2,"\n is number \n",buff);
		}
    else if(isalpha(ch) || ch=='_')
    {
      while(isalnum(ch) || ch=='_')
      {
	buff[i++]=ch;
	ch=fgetc(f1);
      }
      buff[i]='\0';
      for(j=0;j<15;j++)
      {
	if(strcmp(buff,key[j])==0)
	{
	  flag=1;
	  break;
	}
      }
      if(flag==1)
      {
	printf("the keyword is %s\n ",buff);
	fprintf(f2,"the keyword is %s\n ",buff);
      }
      else
      {
		printf("the identifier is %s\n ",buff);
	fprintf(f2,"the identifier is %s\n ",buff);
      }
    }
  }
  getch();
}