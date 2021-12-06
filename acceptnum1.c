#include<stdio.h>
#include<stdlib.h>
int maximum(int arr[],int isize)
{
int i=0,imax=arr[0];
for(i=0;i<isize;i++)
{
	if(arr[i]>imax)
	{
		imax=arr[i];
	}
}
return imax;
}
int main()
{
	int ilength=0,i=0;
	int *ptr=NULL;
	int iret=0;

	printf("ennter the numbers of elements");
	scanf("%d",&ilength);

   ptr=(int*)malloc(sizeof(int)*ilength);

   printf("eneter the elements\n");
   for(i=0;i<ilength;i++)
   {
   	scanf("%d",&ptr[i]);
   }

   iret=maximum(ptr,ilength);
   
   printf("count range is:%d",iret);

   free(ptr);
	return 0;
}