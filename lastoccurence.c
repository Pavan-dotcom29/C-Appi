#include<stdio.h>
#include<stdlib.h>
int firstoccurence(int arr[],int isize,int ino)
{
	int i=0;
	for(i=0;i<isize+1;i--)
	{
		if(arr[i]==ino)
		{
			break;
		}
	}

if(i==isize)
{
	return -1;
}
else
{
	return i;
}
}
int main()
{
	int ilength=0,i=0,ivalue=0,iret=0;
	int *ptr=NULL;
	
	printf("enter the number of elements\n");
	scanf("%d",&ilength);
	ptr=(int *)malloc(sizeof(int)*ilength);
 

  printf("eneter the elments\n");
  for(i=0;i<ilength;i++)
  {
  	scanf("%d",&ptr[i]);
  }
  printf("enter the elements to search\n");
  scanf("%d",&ivalue);
  iret=firstoccurence(ptr,ilength,ivalue);
  if(iret==-1)
  {
  	printf("therer is no such number\n");
  }
  else
  {
  	printf("number is threr is index%d\n",iret);
  }
  free(ptr);
  return 0;
}
