#include <stdio.h>
#include <stdlib.h>

int main()
{
	 int size;
	char *path = "C:/Users/smoger/Desktop/DBS";
	char *command = "du '*path'| tail -1 | cut -f 1 > C:/Users/smoger/Desktop/DBS/abc.txt";
	system(command) ;
	FILE *f = fopen("C:/Users/smoger/Desktop/DBS/abc.txt","r");
	fscanf(f,"%d",&size); 
	fclose(f);
	return 0;
}
