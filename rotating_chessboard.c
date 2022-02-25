
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
static int len=0;
void printMatrix(char arr[len][len][4]);

void reverseRows(char arr[len][len][4])
{
    char temp[3];
        for (int i = 0; i < len; i++)
    {
        for (int j = 0, k = len - 1; j < k; j++, k--)
        {
            strcpy(temp,arr[i][j]);
            strcpy(arr[i][j],arr[i][k]);
            strcpy(arr[i][k],temp);
        }
    }
}
void reverseColumns(char arr[len][len][4])
{
    char temp[3];
    for (int i = 0; i < len; i++)
    {
        for (int j = 0, k = len - 1; j < k; j++, k--)
        {
            strcpy(temp,arr[j][i]);
            strcpy(arr[j][i],arr[k][i]);
            strcpy(arr[k][i],temp);
        }
    }
}
 
// Function for do transpose of matrix
void transpose(char arr[len][len][4])
{	 	  	     	 	   	   	    	 	
    char temp[3];
    for (int i = 0; i < len; i++)
    {
        for (int j = i; j < len; j++)
        {
            strcpy(temp,arr[i][j]);
            strcpy(arr[i][j],arr[j][i]);
            strcpy(arr[j][i],temp);
        }
    }
}
 
// Function for print matrix
void printMatrix(char arr[len][len][4])
{
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len; j++)
            printf( "%s\t",arr[i][j]);
        printf("\n");
    }
}

void rotate90(char arr[len][len][4], char rot, int n)
{
    int i=0;
    while(i<n)
    {
        transpose(arr);
        if(rot == 'A')
        {
            reverseColumns(arr);
        }
        else if(rot == 'C')
        {
            reverseRows(arr);
        }	 	  	     	 	   	   	    	 	
        i++;
    }
}

int main()
{
    int num,i,j;
    char rot;
    scanf("%d",&len);
    scanf(" %c %d",&rot,&num);
    char arr[len][len][4];
    int number=0;
    int k= 1;
    int digit1=0;
    int digit2=0;
    int temp=0;

    for(i=len-1;i>=0;i--)
    {
        number=17;  //diff between char '0' to character 'A'
        for(j=0;j<len;j++)
        {
            arr[i][j][0] = number+'0';
            if(k<10)
            {
                arr[i][j][1] = k + '0';
                arr[i][j][2] = '\0';
            }
            else if(k>=10)
            {
                temp = k;
                digit1 = temp % 10;  //getting digits of a number
                temp = temp/10;
                printf("[SM] k=%d digit1=%d\n",k,digit1);
                arr[i][j][2] = digit1 + '0';
                
                digit2 = temp% 10;
                arr[i][j][1] = digit2 + '0';
                
                arr[i][j][3] = '\0';
            }	 	  	     	 	   	   	    	 	
            number=number+1;
        }
        k= k+1;
    }

    if(num >=0)
    {
        rotate90(arr,rot,num);
    }
    else
    {
        num=abs(num);
        if(rot == 'A')
            rot = 'C';
        else if(rot == 'C')
            rot = 'A';
        rotate90(arr,rot,num);
    }
    printMatrix(arr);
    
    return 0;
}