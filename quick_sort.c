/*quick sort*/

#include <stdio.h>
#include<stdlib.h>
void quicksort(int arr[], int low, int high);
int partition(int arr[], int low, int high);
void swap(int *a, int *b)
{
	int temp=0;
	temp = *a;
	*a = *b;
	*b = temp;
	return;
}
void quicksort(int arr[], int low, int high)
{
	int pi=0;
	if(low < high)
	{
		pi = partition(arr,low,high);  /*partitioning index of the array*/
		
		quicksort(arr, low, pi-1);   /*call quicksort recursively left side*/
		quicksort(arr,pi+1,high);  /*call quicksort recursively right side*/
	}
}
/*
arr[7] = {10,80,30,90,40,50,70};
indexes   0 ,1 , 2, 3,4, 5 ,6
low=0 , high=6, pivot=arr[high]=70
i=low-1=-1

j traverse from 0 to high-1=5

j=0 :arr[j]<pivot ,i++ and swap(arr[i],arr[j])
i=0
arr[]:{10,80,30,90,40,50,70}  no change since i and j are same

j=1:snice arr[j]>pivot do nothing

j=2:arr[j]<pivot i++ and swap(arr[i],arr[j])
i=1
arr[]:{10,30,80,90,40,50,70}

j=3:since arr[j]>pivot do nothing

j=4:arr[j]<pivot ,i++, swap(arr[i],arr[j])
i=2
arr[]:{10,30,40,90,80,50,70}

j=5:arr[j]<pivot ,i++,swap(arr[i],arr[pivot])
i=3
arr[]={10,30,40,50,80,90,70}

j traversed until high-1 
moving pivot element to its position
swap(arr[i+1],arr[high]) ---so that pivot element is at middle
*/

int partition(int arr[], int low, int high)
{

	int pivot = arr[high];
	int i = low-1;
	int j=0;
	int k=0;
	for(k=low;k<=high;k++)
	{
		printf("arr[%d]=%d\t",k,arr[k]);
	}
	printf("\n");
	for(j=low;j<=high-1;j++)
	{
		if(arr[j]<=pivot)
		{
			i++;
			swap(&arr[i],&arr[j]);
		}
	}
	swap(&arr[i+1],&arr[high]);
	return (i+1);
}



int main()
{
	int arr[7] = {10,80,60,90,40,50,70};
	int i = 0;
	int len = sizeof(arr) / sizeof(arr[0]);
	printf("length of the array=%d\n",len);
	
	printf("Unsorted array: \n");
	for(i=0;i<len;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
	
	int high = len-1;
	
	quicksort(arr,0,high);
	
	printf("sorted array is: ");
	for(i=0;i<len;i++)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
}
