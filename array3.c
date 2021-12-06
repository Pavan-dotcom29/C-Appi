#include<stdio.h>
#include<stdlib.h>
float average(int arr[],int isize)
{
	int isum=0,i=0;
	float fresult=0.0f;
	for(i=0;i<isize;i++)
	{
		isum=isum+arr[i];
	}
	fresult=isum/isize;
	return fresult;
}

int main()
{
	int ilength=0,i=0;
	int *ptr=NULL;
	float fret=0.0f;

	printf("ennter the numbers of elements");
	scanf("%d",&ilength);

   ptr=(int*)malloc(sizeof(int)*ilength);

   printf("eneter the elements\n");
   for(i=0;i<ilength;i++)
   {
   	scanf("%d",&ptr[i]);
   }

   fret=average(ptr,ilength);
   printf("average%f\n",fret);


   printf("enter the data is :\n");
   for(i=0;i<ilength;i++)
   {
   	printf("%d\t",ptr[i]);
   }

   free(ptr);





	return 0;
}