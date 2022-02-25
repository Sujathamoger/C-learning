#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,k,i,sum=0;
    int soln=0;
    int total_time=240;
    int remain_time;
    scanf("%d %d",&n,&k);
    
    remain_time = total_time - k;

    i=1;
    while(i<=n)
    {
        sum = sum + (i*5);
        if(sum > remain_time)
        {
            i=i-1;
            break;
        }
        else if(sum == remain_time)
        {
            break;
        }
        i=i+1;  
    }
    if(i>n)
    {
        i=n;
    }
    printf("%d",i);
    return 0;
}	 	  	     	 	   	   	    	 	
