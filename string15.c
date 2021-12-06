#include<stdio.h>
#include<stdbool.h>
bool capitaltosmall(char c)
{
if((c>='a')&&(c<='z'))
{
return c+32;
}
}

int main()
{
	char ch='\0';
   char cret='\0';
	printf("enter the number\n");
	scanf("%c",&ch);

	cret=capitaltosmall(ch);

	printf("capital letter :%c\n",cret);
	return 0;
	}
