#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>
int main()
{
	int fdsrc=0,fddest=0,iret=0;
	char Fname1[30];
	char Fname2[30];
	char Buffer[1024];
	printf("enter source file name \n");
	scanf("%s",Fname1);
	fdsrc=open(Fname1,O_RDONLY);
	if(fdsrc==-1)
	{
		printf("unable to create the file \n");
		return -1;
	}
	else
	{
		printf("file succesfully opened with Fd %d\n",fdsrc);
	}

	printf("enter the destinaton file name\n");
	scanf("%s",Fname2);

	fddest=creat(Fname2,0777);
	while((iret=read(fdsrc,Buffer,sizeof(Buffer)))!=0)
	{
		write(fddest,Buffer,iret);
	}
	close(fdsrc);
	close(fddest);

	return 0;
}
