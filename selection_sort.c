#include <stdio.h>
#include<stdlib.h>
/*****selection sort

arr[] = 64 25 12 22 11

// Find the minimum element in arr[0...4]
// and place it at beginning
11 25 12 22 64

// Find the minimum element in arr[1...4]
// and place it at beginning of arr[1...4]
11 12 25 22 64

// Find the minimum element in arr[2...4]
// and place it at beginning of arr[2...4]
11 12 22 25 64

// Find the minimum element in arr[3...4]
// and place it at beginning of arr[3...4]
11 12 22 25 64 

****/

void swap(int *a,int *b)
{
	int temp=0;
	temp=*a;
	*a=*b;
	*b=temp;
	return ;
}
int main()
{
	int arr[6]={6,2,4,9,1,3};
	int min_index=0;

	int i=0,n;
	
	n=sizeof(arr)/sizeof(arr[0]);
	
	printf("%d\n",n);
	for(i=0;i<n-1;i++)
	{
		min_index=i;
		for(int j=i+1;j<n;j++)
		{
			printf("arr[min_index],arr[j]=%d %d\n",arr[min_index],arr[j]);
			if(arr[j]<arr[min_index])
			{
				swap(&arr[min_index],&arr[j]);
			}
		}
		
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	


	
	return 0;
}
