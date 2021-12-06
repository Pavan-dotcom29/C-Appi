#include<stdio.h>
#include<stdlib.h>
int arraycountodd(int arr[],int isize)
{
	int i=0,icnt=0;
	for(i=0;i<isize;i++)
	{
	  if((arr[i]%2==1))
	  {
	  	isum=isum+arr[i];
	  }	
	  
	}
	return isum;
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

   iret=arraycountodd(ptr,ilength);
   printf("number of elements eveba are :%f\n",iret);


   printf("enter the data is :\n");
   for(i=0;i<ilength;i++)
   {
   	printf("%d\t",ptr[i]);
   }

   free(ptr);
	return 0;
}