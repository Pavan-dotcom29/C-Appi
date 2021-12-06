#include<stdio.h>
int countcapital(char *str)
{
	int icnt=0;
	while(*str!='\0')
	{
	if((*str>='A') && (*str<='Z'))
	{
	icnt++;
	}
	str++;
	}
	return icnt;
}
int main()
{
	char arr[20];
	int iret=0;

	printf("eneter the string\n");
	scanf("%[^[\'\n')s",arr);

	iret=countcapital(arr);

	printf("samll letters i s:%d\n",iret);
	return 0;
	}

