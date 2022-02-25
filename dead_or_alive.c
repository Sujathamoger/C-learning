
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,n,i,j;
    int k;
    int a,b;
    int l,r;
    scanf("%d%d%d",&x,&y,&n);
    int arr[x][y];
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            arr[i][j]=0;
        }
    }
    
    for(k=0;k<n;k++)
    {
        scanf("%d %d",&a,&b);
        for(i=0;i<x;i++)
        {
            for(j=0;j<y;j++)
            {
                if(i == a)
                {
                    arr[i][j] = 1;
                }
                if(j == b)
                {
                    arr[i][j] = 1;
                }
            }
        }	 	  	     	 	   	   	    	 	
    }
    scanf("%d %d",&l,&r);
    if(l==0 && r==0)
    {
        if(arr[l][r]==1 && arr[l][r+1]==1 && arr[l+1][r]==1)
        {
            printf("DEAD!");
        }
        else
        {
            printf("ALIVE!");
        }
    }
    else if((l==x-1) && (r==x-1))
    {
        if(arr[l][r]==1 && arr[l][r-1]==1 && arr[l-1][r]==1)
        {
            printf("DEAD!");
        }
        else
        {
            printf("ALIVE!");
        }
        
    }
    else if((l==x-1) && (r==0))
    {
        if(arr[l][r]==1 && arr[l-1][r]==1 && arr[l][r+1]==1)
        {
            printf("DEAD!");
        }
        else
        {
            printf("ALIVE!");
        }
    }	 	  	     	 	   	   	    	 	
    else if((r==x-1) && (l==0))
    {
        if(arr[l][r]==1 && arr[l][r-1]==1 && arr[l+1][r]==1)
        {
            printf("DEAD!");
        }
        else
        {
            printf("ALIVE!");
        }
    }
    else if(l==0 && (r!=(x-1)))
    {
        if(arr[l][r]==1 && arr[l][r+1]==1 && arr[l][r-1]==1 && arr[l+1][r]==1)
        {
            printf("DEAD!");
        }
        else
        {
            printf("ALIVE!");
        }
    }
    else if(r==0 && (l!=(x-1)))
    {
        if(arr[l][r]==1 && arr[l-1][r]==1 && arr[l+1][r]==1 && arr[l][r+1]==1)
        {
            printf("DEAD!");
        }
        else
        {
            printf("ALIVE!");
        }
    }
    else if((l==x-1) && (r!=0))
    {
        if(arr[l][r]==1 && arr[l][r-1]==1 && arr[l-1][r]==1 && arr[l][r+1]==1)
        {	 	  	     	 	   	   	    	 	
            printf("DEAD!");
        }
        else
        {
            printf("ALIVE!");
        }
        
    }
    else if((r==x-1) && (l!=0))
    {
        if(arr[l][r]==1 && arr[l][r-1]==1 && arr[l-1][r]==1 && arr[l+1][r]==1)
        {
            printf("DEAD!");
        }
        else
        {
            printf("ALIVE!");
        }
        
    }
    else
    {
        if(arr[l][r]==1 && arr[l-1][r]==1 && arr[l+1][r]==1 && arr[l][r+1]==1 && arr[l][r-1]==1)
        {
            printf("DEAD!");
        }
        else
        {
            printf("ALIVE!");
        }
    }
    

    return 0;
}	 	  	     	 	   	   	    	 	
