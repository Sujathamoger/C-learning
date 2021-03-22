#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char arr[10]={'a','b','c','d','e','\0'};
	char arr2[10];
	int len=0,i=0,j=0,k=0;
	int n=3;
	char *ptr=&arr;
	ptr = ptr+2;
	printf("%c\n",*ptr);
	
	len=strlen(arr);
	printf("array length=%d\n",len);
	
	while(*ptr !='\0')
	{
		arr2[i]=*ptr;
		*ptr = '\0';
		ptr++;
		i++;
	}
	
	printf("\narray2\n");
	for(k=0;k<len;k++)
	{
		printf("%c\t",arr2[k]);
	}
	
	printf("array1\n");
	for(k=0;k<len;k++)
	{
		printf("%c\t",arr[k]);
	}
	
	while(i<len && arr[j]!='\0')
	{
		arr2[i]=arr[j];
		i++;
		j++;
	}
	
	printf("\nRotated array\n");
	for(k=0;k<len;k++)
	{
		
		printf("%c\t",arr2[k]);
	}
	
	
	
	return 0;
}
