#include <stdio.h>
#include <string.h>
void main(void) {
	FILE* fp;
	fp=fopen("sample.txt","w");
	char str[100];
	int i;
	for(i=0;i<3;i++)
	{
	printf("input a word");
	scanf("%s",str); //�����Ͷ� &�� �ʿ���� 
	fprintf(fp,"%s\n",str);

}
	
	fclose(fp);

	return 0;
}

