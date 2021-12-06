#include<stdio.h>
#include<stdbool.h>
bool checkbit(int ino)
{
	int imask=0X00000008;
	int iresult=0;

	iresult=ino &imask;

	if(iresult==imask)
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
	int ivalue=0;
	bool bret=false;

	printf("eneter the number\n");
	scanf("%d",&ivalue);

	bret=checkbit(ivalue);

	if(bret==true)
	{
		printf("4bit is ON\n");
	}
	else
	{
		printf("4th bit is OFF\n");
	}
return 0;
}
