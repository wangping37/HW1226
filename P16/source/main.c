#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define ENTER 13
#define MAX 80
/*由鍵盤輸入字串，附加到檔案*/

int main(void)
{
	FILE *fptr;
	char str[MAX], ch;//宣告字元陣列str，用來儲存鍵盤輸入的字串
	int i = 0;
	fptr = fopen("output.txt", "a");
	if (fptr != NULL)//判斷是否成功開啟
	{
		printf("請輸入字串，按下ENTER鍵結束輸入:\n");
		while ((ch = getche()) != ENTER && i < MAX)//按下的鍵不是ENTER且i<MAX
		{
			str[i++] = ch;//一次增加一個字元到str陣列中
		}
		putc('\n', fptr);//寫入換行字元
		fwrite(str, sizeof(char), i, fptr);//str陣列的字元附加到檔案
		fclose(fptr);//關檔
		printf("\n檔案附加完成!!\n");
	}
	system("pause");
	return 0;
}