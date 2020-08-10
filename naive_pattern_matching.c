#include<stdio.h>
#include<stdlib.h>
#include<stdio.h>

void patternMatching(char *str,char *pat)
{
	int n=strlen(str);
	int m = strlen(pat);
	printf("str_Len=%d pat_len=%d\n",n,m);
	int i,j;
	
	for(i=0;i<n-m;i++)
	{
		for(j=0;j<m;j++)
		{
			if(str[i+j] != pat[j])
				break;
		}
		
		if(j == m)
			printf("pattern found at the index =%d\n",i);
	}
}
int main()
{
	char str[21]="iamsujatahellosujata";
	char pat[4]="suja";
	patternMatching(str,pat);
	return 0;
}
