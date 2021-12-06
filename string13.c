#include<stdio.h>
#include<stdbool.h>
bool checkdigit(char c)
{
if((c>='0')&&(c<='9'))
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

	bret=checkdigit(ch);


	if(bret==true)
	{
	printf("it is didgit\n");
	}
	else
	{
	printf("it is not didgit");
	}
	return 0;
	}
