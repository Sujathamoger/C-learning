#include <math.h>
#include <stdio.h>

void swap(int *a,int *b)
{
	int *temp;
	*temp=*a;
	*a=*b;
	*b=*temp;
}
void insertion_sort(int *arr1[10],int n)
{
	int i,j,key;
	for(i=1;i<n;i++)
	{
		key = arr1[i];
		j=i-1;
		while(j>=0)
		{
			if(arr1[j] > key)
			{
				swap(&arr1[j],&arr1[i]);
			}
			j--;
		}
	}
}
int main()
{
	int arr1[10],arr2[10];
 	int i,n;
 	printf("Enter the numbers of elements\n");
 	scanf("%d",&n);
	printf("Enter the numbers\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr1[i]);
	}
	
	insertion_sort(&arr1,n);
	
	return 0;
}
