#include <stdio.h>
#include <string.h>
int main(int argc,char* argv[])
{
	
	if (!strcmp(argv[1],"-c"))
	{
		int i=0;
		FILE* words=fopen(argv[2],"r");
		while(getc(words)!=EOF)
		{
			i++;
		}
		printf("共有%d个字符",i);
		
	}
	else if(!strcmp(argv[1],"-w"))
	{
		int i=0;
		int past=1; 
		char ch;
		FILE* words=fopen(argv[2],"r");
		while((ch=getc(words))!=EOF)
		{
			if(ch==32)
			{
				i++;
				past=1;
			}
			past=0;
			
		}
		if(past==0)
		{
			i++;
		}
		printf("共有%d个单词",i);
	}
	
 } 


