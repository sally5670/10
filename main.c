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
	
	while((c=fgetc(fp))!=EOF)//�ѱ��� ������ �������� �ƴϸ� 
	{
		//�ѱ��� ���
		putchar(c);//�ѱ��� ��� 
		
	}
	fclose(fp);
	system("PAUSE"); 
	return 0;
}

