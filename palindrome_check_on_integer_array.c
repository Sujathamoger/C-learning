#include<stdio.h>
#include<stdlib.h>

int main()
{
	int arr[10]={1,2,3,2,1};
	int i,j,k,mid;
	int count = 1;
	int n=5;
	int temp=0;
	
	printf("Array\n");
	for(k=0;k<n;k++)
	{
		printf("%d\t",arr[k]);
	}
	
	mid=n/2;
	printf("mid=%d\n",mid);
	
	i=0;
	j=n-1;
	while(i<=mid && j>=mid)
	{
		printf("i=%d j=%d\n",i,j);
		
		if(arr[i]!=arr[j])
		{
			count = 0;
			break;
		}
		i++;
		j--;
	}
	
	if(count == 1)
	{
		printf("integer array is palindrome\n");
	}
	else
		printf("integer array is not a palindrome\n");
		
	return 0;
}
