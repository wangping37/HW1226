#include <stdio.h>
#include <stdlib.h>
/*顯示檔案內容，並計算字元數*/

int main(void)
{
	FILE *fptr;//宣告指向檔案的指標
	char ch;//宣告字元變數，接收讀取檔案內的字元
	int count = 0;//宣告整數變數，計算檔案的字元數
	fptr = fopen("welcome.txt", "r");//開啟檔案
	if (fptr != NULL)//開不成功，傳回NULL
	{
		while ((ch = getc(fptr)) != EOF)//判斷是否到達檔尾
		{
			printf("%c", ch);
			count++;
		}
		fclose(fptr);//關閉檔案
		printf("\n總共有%d個字元\n", count);
	}
	else//檔案開啟失敗
	{
		printf("檔案開啟失敗!!\n");
	}
	system("pause");
	return 0;
}