#include<stdio.h>
void strrevX(char *start)
{
	char *end=start;
	char temp;

	while(*end!='\0')
	{
		end++;
	}
	end--;

  while(start<end)
  {
  	temp=*start;
  	*start=*end;
  	*end=temp;

  	start++;
  	end--;
  }
}

int main()
{
	char arr[30];
	printf("enete the string\n");
	scanf("%[^'\n']s",arr);

	strrevX(arr);

	printf("reversre is  string is %s\n",arr);

		return 0;
}