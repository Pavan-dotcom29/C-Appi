#include<stdio.h>

int main()
{
	char arr[50];

	printf("enter your name\n");
	scanf("%[^'\n']s",arr);

	printf("your eneterd name is :%s\n",arr);

	return 0;
}