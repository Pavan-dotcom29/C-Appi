#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>

int main()
{
	int fd=0;
	char Fname[30];

	printf("enter the file name \n");
	scanf("%s",Fname);

	fd=creat(Fname,0777);
	if(fd==1)
	{
		printf("unable to create the file \n");
	}
	else
	{
		printf("file succesfully created Fd %d\n",fd);
	}
	return 0;
}