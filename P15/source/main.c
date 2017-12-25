#include<stdio.h>
#include<stdlib.h>
/*拷貝檔案內容到其他檔案*/

int main(void)
{
	FILE *fptr1, *fptr2;//宣告指向檔案的指標
	char ch;//接收讀取檔案的字元變數
	fptr1 = fopen("welcome.txt", "r");//開啟可讀取的檔案
	fptr2 = fopen("output.txt", "w");//開啟可寫入的檔案
	if ((fptr1 != NULL) && (fptr2 != NULL))//判斷開檔是否成功
	{
		while ((ch = getc(fptr1)) != EOF)
		{
			putc(ch, fptr2);//將字元ch寫到fptr2所指向的檔案
		}
		fclose(fptr1);//關檔
		fclose(fptr2);//關檔
		printf("檔案拷貝完成!!\n");
	}
	else
	{
		printf("檔案開啟失敗!!\n");
	}
	system("pause");
	return 0;
}