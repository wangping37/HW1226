#include<stdio.h>
#include <stdlib.h>
#define MAX 80
/*使用fread()函數讀取檔案內容*/
int main(void)
{
	FILE *fptr;
	char str[MAX];
	int bytes;//存放fread()成功讀取的字元數
	fptr = fopen("output.txt", "r");
	while (!feof(fptr))//判斷是否讀到檔尾
	{
		bytes = fread(str, sizeof(char), MAX - 1, fptr);
		str[bytes] = '\0';
		printf("%s\n", str);//印出檔案內容
	}
	fclose(fptr);//關檔
	system("pause");
	return 0;
}