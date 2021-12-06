#include<stdio.h>

char chartoggle(char c)
{
   if((c>='A')&&(c<='Z'))
{
   return c+32;
}
   else if(c>='a')&&(c<='z')
{
	return c-32;
}
}

int main()
{
	char ch='\0';
   char cret='\0';
	printf("enter the number\n");
	scanf("%c",&ch);

	cret=chartoggle(ch);

	printf("toggle letter :%c\n",cret);
	return 0;
	}
