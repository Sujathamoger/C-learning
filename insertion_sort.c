#include <math.h>
#include <stdio.h>

void insertion_sort(int *arr,int n)
{
	int i,j,key;
	for(i=1;i<n;i++)
	{
		key = arr[i];
		j=i-1;
		while(j>=0 && arr[j]>key)
		{
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;
	}
}
int main()
{
	int arr[6] = {7,3,5,4,2,6};
 	int i,n;
	n=6;
	
	printf("Array before sorting\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	insertion_sort(arr,n);	
	
	printf("\n\nArray after sorting\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
}
