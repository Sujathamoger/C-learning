#include<stdio.h>
#include<stdlib.h>

int main()
{
	int arr[10]={2,4,6,8,10,12,14,16,18,20};
	int i,j,k,mid;
	int count=0;
	int n=10;
	int temp=0;
	
	printf("Array\n");
	for(k=0;k<n;k++)
	{
		printf("%d\t",arr[k]);
	}
	
	printf("Sujata\n");
	mid=n/2;
	printf("mid=%d\n",mid);
	i=0;
	j=n-1;
	while(i<=mid && j>=mid)
	{
		printf("i=%d j=%d\n",i,j);
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		i++;
		j--;
	}
	
	printf("\nReversed Array\n");
	for(k=0;k<n;k++)
	{
		printf("%d\t",arr[k]);
	}
	return 0;
}
