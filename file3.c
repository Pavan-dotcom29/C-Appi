#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>
int main()
{
	int fd=0,iret=0;
	char Fname[30];
	char Data[]="Marvellous info systems";
	printf("enter the file name \n");
	scanf("%s",Fname);
	fd=open(Fname,O_RDWR);
	if(fd==1)
	{
		printf("unable to create the file \n");
		return -1;
	}
	else
	{
		printf("file succesfully opened with Fd %d\n",fd);
	}

	iret=write(fd,Data,10);
	printf("%d bytes yets successsfully written in the file\n",iret);
	return 0;
}