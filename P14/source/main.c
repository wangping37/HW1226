#include <stdio.h>
#include <stdlib.h>
/*����ɮפ��e�A�íp��r����*/

int main(void)
{
	FILE *fptr;//�ŧi���V�ɮת�����
	char ch;//�ŧi�r���ܼơA����Ū���ɮפ����r��
	int count = 0;//�ŧi����ܼơA�p���ɮת��r����
	fptr = fopen("welcome.txt", "r");//�}���ɮ�
	if (fptr != NULL)//�}�����\�A�Ǧ^NULL
	{
		while ((ch = getc(fptr)) != EOF)//�P�_�O�_��F�ɧ�
		{
			printf("%c", ch);
			count++;
		}
		fclose(fptr);//�����ɮ�
		printf("\n�`�@��%d�Ӧr��\n", count);
	}
	else//�ɮ׶}�ҥ���
	{
		printf("�ɮ׶}�ҥ���!!\n");
	}
	system("pause");
	return 0;
}