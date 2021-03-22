#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i=0,j=0,k=0;
	int n=5;
	
	for (i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%c\t",'*');
		}
		printf("\n");
	}
	
	printf("\n");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j>=n-1-i)
			{
				printf("%c\t",'*');
			}
			else
				printf("%c\t",' ');
		
		}
		printf("\n");
	}
	
	return 0;
}
