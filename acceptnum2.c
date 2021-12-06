#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool checknumber(int arr[],int isize)
{
int i=0,imax=arr[0];
for(i=0;i<isize;i++)
{
	if(arr[i]==11)
	{
		break;
		
	}
	if(i==isize)
	{
		return true;
	}
	else
	{
		return false;
	}

}
}
int main()
{
	int ilength=0,i=0;
	int *ptr=NULL;
	bool bret=false;

	printf("ennter the numbers of elements");
	scanf("%d",&ilength);

   ptr=(int*)malloc(sizeof(int)*ilength);

   printf("eneter the elements\n");
   for(i=0;i<ilength;i++)
   {
   	scanf("%d",&ptr[i]);
   }
   bret=checknumber(ptr,ilength);
   if(bret==true)
   {
   	printf("number is there");
   }
   else
   {
   	printf("number is not there");
   }
     free(ptr);
	return 0;

}