#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int largest(int arr[], int n)
{
	int i;
	int max = arr[0];
	for (i = 1; i < n; i++)
	if (arr[i] > max)
	max = arr[i];
	return max;
}

int add(int xx){
	int yy = 0;
	for(int i = 1; i <= xx; ++i)
	{
		yy += i;
	}
	return yy;
}
bool search(int arr[],int n,int size)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==n)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int max_size=0;
    int maximum_number=0;
    int sum=0;
    int i,j,k,y,cnt1;
    int cnt=0;
    scanf("%d",&max_size);
    int arr[max_size];
    
    for(int i=0;i<max_size;i++)
    {	 	  	     	 	   	   	    	 	
        scanf("%d",&arr[i]);
    }
    
    maximum_number = largest(arr,max_size);
    int arr_search[maximum_number];
    sum = add(maximum_number);
    
    for(i = 0; i<=max_size-maximum_number; i++)
	{
		k = 0, cnt1 = 0;
		for(int s=0;s<maximum_number;s++)
		{
		    arr_search[s]=0;
		}
		for(j = 0; j<maximum_number; j++)
		{
		    if(j<maximum_number-1)
		    {
		        if(arr[i+j]==arr[i+j+1])
		        {
		            break;
		        }
		        else
		        {
		            if(search(arr_search,arr[i+j],maximum_number))
		            {
		                break;
		                
		            }
		            else
		            {
		                k += arr[i+j];
		                arr_search[cnt1]=arr[i+j];
		                cnt1++;
		            }
		        }	 	  	     	 	   	   	    	 	
		    }
		    else
		    {
		        k+=arr[i+j];
		        cnt1++;
		    }
		}
		
		if(k==sum)
		{
		    cnt++;
		    y = maximum_number-1;
		    i=i+y;
		}
	}
	printf("%d",cnt);
    return 0;
}
