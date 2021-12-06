#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UNIT;
bool checkbit(UNIT ino,UNIT ipos)
{
	UNIT imask=0x00000001;
	UNIT result=0;

	if((ipos<1)||(ipos>32))
	{
		return false;
	}
	imask=imask<<(ipos-1);
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
	UNIT ivalue=0,ibit=0;
	bool bret=false;

	printf("eneter the number\n");
	scanf("%d",&ivalue);

	printf("enetr the position\n");
	scanf("%d",&ibit);

	bret=checkbit(ivalue,ibit);

	if(bret==true)
	{
		printf("bit is ON\n");
	}
	else
	{
		printf("bit is OFF\n");
	}
	return 0;
}