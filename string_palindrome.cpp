#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int i=0,len=0;
	char ar[7]="sujata";
	char *ptr = ar;
	len = strlen(ar);
	printf("len=%d",len);
	char *ptr1 = ar[len-1];
	for(i=0;i<len;i++)
	{
		if(*ptr == *ptr1)
		{
			break;
		}
		*ptr++;
		*ptr1--;
	}
	if (i==len)
	{
		printf("palindrome\n");
	}
	return 0;
}
