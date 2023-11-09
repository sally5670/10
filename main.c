#include <stdio.h>
#include <string.h>
#include<stdlib.h>
int main(int argc,char *argv()) {
	FILE* fp;
	char c;
	
	fp=fopen("sample.txt","r");
	if(fp==NULL)
	{
		printf("failed to open\n");
		return 0;
	}
	
	while((c=fgetc(fp))!=EOF)//한글자 읽은게 마지막이 아니면 
	{
		//한글자 출력
		putchar(c);//한글자 출력 
		
	}
	fclose(fp);
	system("PAUSE"); 
	return 0;
}

