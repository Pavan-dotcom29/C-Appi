#include<stdio.h>
#include<stdbool.h>

bool checkpalindrom(char *str)
{

	char *start=NULL;
	char *end=NULL;
	start=str;
	end=str;
	while(*end!='\0')
	{
		end++;
	}
	end--;

	while(start<end)
	{
		if(*start!=*end)
		{
			break;
		}
		start++;
		end++;
	}

	if(start<end)
	{
		return false;
	}
	else
	{
		return true;
	}

}


int main()
{
	char arr[30];
	int bret=false;
	
    printf("enter the string\n");
	scanf("%[^'\n']s",arr);

	bret=checkpalindrom(arr);
	if(bret==true)
	{
		printf("it is palaindrom\n");
	}
	else
	{
		printf("it is not palindrom\n");
	}
	return 0;

}