#include<stdio.h>
#include<stdbool.h>
bool checksmall(char c)
{
if((c>='a')&&(c<='z'))
{
return true;
}
else
{
  return false;
}
	
}

int main()
{
	char ch='\0';
    bool bret=false;
	printf("enter the number\n");
	scanf("%c",&ch);

	bret=checksmall(ch);


	if(bret==true)
	{
	printf("it is samll\n");
	}
	else
	{
	printf("it is not small");
	}
	return 0;
	}
