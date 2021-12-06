#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>
int main()
{
	int fd=0,iret=0;
	char Fname[30];
	char Buffer[10];
	printf("enter the file name \n");
	scanf("%s",Fname);
	fd=open(Fname,O_RDONLY);
	if(fd==-1)
	{
		printf("unable to create the file \n");
		return -1;
	}
	else
	{
		printf("file succesfully opened with Fd %d\n",fd);
	}

	printf("data from the file\n");
	while((iret=read(fd,Buffer,sizeof(Buffer)))!=0)
	{
		write(1,Buffer,iret);
	}
	close(fd);
	return 0;
}
