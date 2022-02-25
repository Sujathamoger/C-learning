#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include <string.h>

static int count=0;
void removeDuplicates(char *s)
{
    if(s[0]=='\0')
        return;
    
    if(s[0]==s[1])
    {
        int i=0;
        while(s[i]!='\0')
        {
            s[i]=s[i+2];
            i++;
        }
        count = count +1;
        removeDuplicates(s);
    }
    removeDuplicates(s+1);
}

bool checkForduplicates(char *s)
{
    int i=0; 
    while(s[i]!='\0')
    {
        if(s[i]==s[i+1])
        {
            return 1;
        }
        i=i+1;
    }
    return 0;
}	 	  	     	 	   	   	    	 	
int main()
{
    char str[100000];
    int i;
    for(i=0;i<100000;i++)
    {
        scanf("%c",&str[i]);
    }
    while(checkForduplicates(str)!=0)
    {
        removeDuplicates(str);
    }
    
    if(count%2!=0)
        printf("Yes");
    else
        printf("No");
    return 0;
}