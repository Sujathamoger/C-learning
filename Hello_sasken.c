#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[200];
    char pat[6]="sasken";
    fgets(str,sizeof(str),stdin);
    int n=0;
    int m=strlen(pat);
    int  i,j;
    int count=0;
    i=0;
    char c;
    while(str[i] !='\n')
    {
        n++;
        i++;
    }
    
    for(i=0;i<=n-m;i++)
    {
        for(j=0;j<m;j++)
        {
            if(str[i+j] >= 'a' && str[i+j] <= 'z')
            {
                c = str[i+j] - 32;
            }
            else if(str[i+j] >= 'A' && str[i+j] <= 'Z')
            {
                c = str[i+j] + 32;
            }
            if((str[i+j] != pat[j]) && (c != pat[j]))
            {
                break;
            }	 	  	     	 	   	   	    	 	
        }
        if(j == m)
        {
            count = count +1;
        }
    }
    if(count > 0)
    {
        printf("Hello, Sasken");
        for(i=0;i<count;i++)
        {
            printf("!");
        }
    }
    else
    {
        printf("Hello, World!");
    }
    return 0;
}