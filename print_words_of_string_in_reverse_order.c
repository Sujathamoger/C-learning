#include<stdio.h>
#include<string.h>


void revString(char *str,int len)
{
	int i;
	printf("%s\n",str);
	for(i=len-1;i>=0;i--)
	{
		if(str[i] == ' ')
		{
			str[i]= '\0';
			printf("%s\t",&(str[i])+1);
		}
	}
	printf("%s",str);
}
int main()
{
	char arr[25]= "Hellow I am Sujata";
	
	int i,len=0;
	len=strlen(arr);
	printf("len=%d\n",len);
	
	revString(&arr,len);
	return 0;
}
