#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num1 = 3;
	int num2 = 7;
    int num = 6;
    int sum;
  
  /*Set bits in a number*/
  num1 = num1 | 0xF;
  printf("Set value=0x%x\n",num1);
  
  /*Clear a bit in 2nd position a number*/
  num2 = num2 & ~(1 << 1);
  printf("Reset value=0x%x\n",num2);
  
  /*Toggle bits in a number*/
  num = num ^ 0xF;
  printf("0x%x\n",num);
  return 0;
}
