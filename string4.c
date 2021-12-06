#include<stdio.h>
void display(char *brr)
{
	printf("name is %s\n",brr);
}
int main()
{
	char arr[50];

	printf("enter your name\n");
	scanf("%[^'\n']s",arr);

	display(arr);

	return 0;
}