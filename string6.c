#include<stdio.h>
void display(char *brr)
{


	while(*brr=!'\0')
	{
		printf("%c\n",*brr );
		brr++;
	}
}
int main()
{
	char arr[10];

	printf("eneter the name\n");
	scanf("%[^'\n']s",arr);

	display(arr);
	return 0;
}

