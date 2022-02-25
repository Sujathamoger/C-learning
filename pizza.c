#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,q,i,k;
    
    scanf("%d",&n);
    
    int price[n];
    int count;
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&price[i]);
    }
    
    scanf("%d",&q);
    int coins[q];
    
    for(i=0;i<q;i++)
    {
        scanf("%d",&coins[i]);
    }
    
    for(i=0;i<q;i++)
    {
        count = 0;
        for(k=0;k<n;k++)
        {
            if(coins[i]>=price[k])
            {
                count = count+1;
            }
        }
        printf("count =%d\n",count);
    }	 	  	     	 	   	   	    	 	
    return 0;
}