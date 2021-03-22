#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a=5;
	int b=6;
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("a=%d\t b=%d\n",a,b);
	return 0;
}
