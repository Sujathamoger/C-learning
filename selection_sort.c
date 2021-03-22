#include <stdio.h>
#include<stdlib.h>

/*Finding minimum element and swapping with the index element*/

int main()
{
	int arr[6]={6,2,4,9,1,3};
	int i,j,min,n,temp;
	
	n=sizeof(arr)/sizeof(arr[0]);
	
	printf("%d\n",n);
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)                    /*Inner for loop to find out what is the minimum element*/
		{
			printf("arr[min_index],arr[j]=%d %d\n",arr[min],arr[j]);
			if(arr[j] < arr[min])
			{
				min = j;
			}
		}
		
		temp = arr[i];                    /*Swapping minimum element & index element*/
		arr[i] = arr[min];
		arr[min] = temp;
		
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	
	return 0;
}
