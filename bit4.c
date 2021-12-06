#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UNIT;
bool checkbit(UNIT ino)
{
	UNIT imask=0x0000000F;
	UNIT result=0;

	result=ino&imask;
	if(result==imask)
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
	UNIT ivalue=0;
	bool bret=false;

	printf("eneter the number\n");
	scanf("%d",&ivalue);

	bret=checkbit(ivalue);

	if(bret==true)
	{
		printf("4th birt is ON\n");
	}
	else
	{
		printf("4 th bit is OFF\n");
	}
}