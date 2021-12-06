#include<stdio.h>
int main()
{

	int arr[5];
	int isum=0;
	printf("enter the numbers\n");
	scanf("%d",&arr[0]);
	scanf("%d",&arr[1]);
	scanf("%d",&arr[2]);
	scanf("%d",&arr[3]);
	scanf("%d",&arr[4]);

    isum=arr[0]+arr[1]+arr[2]+arr[3]+arr[4]+arr[5];

    printf("addition is :%d\n",isum);


	return 0;
}