#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define ENTER 13
#define MAX 80
/*����L��J�r��A���[���ɮ�*/

int main(void)
{
	FILE *fptr;
	char str[MAX], ch;//�ŧi�r���}�Cstr�A�Ψ��x�s��L��J���r��
	int i = 0;
	fptr = fopen("output.txt", "a");
	if (fptr != NULL)//�P�_�O�_���\�}��
	{
		printf("�п�J�r��A���UENTER�䵲����J:\n");
		while ((ch = getche()) != ENTER && i < MAX)//���U���䤣�OENTER�Bi<MAX
		{
			str[i++] = ch;//�@���W�[�@�Ӧr����str�}�C��
		}
		putc('\n', fptr);//�g�J����r��
		fwrite(str, sizeof(char), i, fptr);//str�}�C���r�����[���ɮ�
		fclose(fptr);//����
		printf("\n�ɮת��[����!!\n");
	}
	system("pause");
	return 0;
}