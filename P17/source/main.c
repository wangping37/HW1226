#include<stdio.h>
#include <stdlib.h>
#define MAX 80
/*�ϥ�fread()���Ū���ɮפ��e*/
int main(void)
{
	FILE *fptr;
	char str[MAX];
	int bytes;//�s��fread()���\Ū�����r����
	fptr = fopen("output.txt", "r");
	while (!feof(fptr))//�P�_�O�_Ū���ɧ�
	{
		bytes = fread(str, sizeof(char), MAX - 1, fptr);
		str[bytes] = '\0';
		printf("%s\n", str);//�L�X�ɮפ��e
	}
	fclose(fptr);//����
	system("pause");
	return 0;
}