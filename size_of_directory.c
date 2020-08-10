#include <ftw.h>
#include<stdio.h>
#include <sys/stat.h>


int list(const char *name,const struct stat *status,int type)
{
	if(type == FTW_NS)
		return 0;
	
	if(type == FTW_F)
		printf("%s\n",name);
	
	if(type == FTW_D && strcmp(".",name)!= 0)
		printf("%s\n",name);
		
		
	return 0;
}


int main()
{

ftw("/ws/smoger/sujata",list,1);

return 0;
}