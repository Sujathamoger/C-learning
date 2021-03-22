#include<stdio.h>
#include<stdlib.h>

int main()
{
	int arr[6]={1,2,3,4,5,6};
	int i=0,n=6;
	int sum=0,average=0;
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	average=sum/n;
	printf("average=%d\n",average);
	return 0;
}
