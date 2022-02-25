#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include <math.h>

void reverse(char str[], int len, int l, int r)
{
    char c;
    int i,j;

    if (l < 0 || r >= len || l > r)
    {
        printf("invalid range\n");
        puts(str);
    }
    
    int temp = (l+r) /2;
    
    while(l < r)
    {
        c = str[l];
        str[l] = str[r];
        str[r] = c;
        l++;
        r--;
    }
}
int main()
{

    char str[200];
    int n;
    int l,r;
    int x,y,temp;
    int p,q;
    int len=0;
    int i;
    
    fgets(str,sizeof(str),stdin);

    scanf("%d", &n);
   
    for(i=0;str[i]!='\n';i++)
    {	 	  	     	 	   	   	    	 	
        len++;
    }
    
    str[i]='\0';
    
    for(i=0;i<n;i++)
    {
        scanf("%d %d", &l,&r);
        
        x = l%len;
        y = r%len;
        
        if(x == y)
        {
            if(x<0)
                x= x*-1;
            if(y<0)
                y=y*-1;
        }
        else
        {
            if(x<0)
                x=x+len;
            if(y<0)
                y=y+len;
        }
        if(x>y)
        {
            temp=x;
            x=y ;
            y=temp;
        }
       
        reverse(str, len, x, y-1);
    }
   
    puts(str);
    return 0;
}	 	  	     	 	   	   	    	 	
