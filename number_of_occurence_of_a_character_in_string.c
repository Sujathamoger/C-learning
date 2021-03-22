#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char arr[10]="abcdefdgd";
	int len,i,j,count=0;
	len=strlen(arr);
	printf("len=%d\n",len);
	
	for(i=0;i<len;i++)
	{
		if(arr[i]=='d')
		{
			printf("found at index =%d\n",i+1);
			count = count+1;
		}
	}
	
	printf("d occurs %d times\n",count);
	return 0;
}
