#include <stdio.h>
#include <stdlib.h>

static int size;
void sortfunc(int arr[][size],int n)
{
    int i,j;
    int temp1=0;
    int temp2=0;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(arr[1][j] < arr[1][j+1])
            {
                temp1=arr[1][j];
                temp2=arr[0][j];
                arr[1][j]=arr[1][j+1];
                arr[0][j]=arr[0][j+1];
                arr[1][j+1]=temp1;
                arr[0][j+1]=temp2;
            }
        }
    }
}

int main()
{
    int n,m,x,y,i,j;
    scanf("%d%d",&n,&m);
    size=m;
    int a[2][m];
    int c,d;
    int b[m];
    for (i=0;i<m;i++)
    {
        scanf("%d%d",&c,&d);
        a[0][i]=c;
        a[1][i]=d;
        b[i]=d;
    }	 	  	     	 	   	   	    	 	

    sortfunc(a,m);
    
    int rem=n;
    int total=0;
    for(i=0;i<m;i++)
    {
        int it=a[1][i];
        if(rem < a[0][i])
        {
            total += rem * it;
            rem = 0;
            break;
        }
        rem = n - a[0][i];
        total += it * a[0][i] ;
        n = rem;
    }
    printf("%d",total);
    return 0;
}