#include<stdio.h>
#include<stdlib.h>
/*�����ɮפ��e���L�ɮ�*/

int main(void)
{
	FILE *fptr1, *fptr2;//�ŧi���V�ɮת�����
	char ch;//����Ū���ɮת��r���ܼ�
	fptr1 = fopen("welcome.txt", "r");//�}�ҥiŪ�����ɮ�
	fptr2 = fopen("output.txt", "w");//�}�ҥi�g�J���ɮ�
	if ((fptr1 != NULL) && (fptr2 != NULL))//�P�_�}�ɬO�_���\
	{
		while ((ch = getc(fptr1)) != EOF)
		{
			putc(ch, fptr2);//�N�r��ch�g��fptr2�ҫ��V���ɮ�
		}
		fclose(fptr1);//����
		fclose(fptr2);//����
		printf("�ɮ׫�������!!\n");
	}
	else
	{
		printf("�ɮ׶}�ҥ���!!\n");
	}
	system("pause");
	return 0;
}