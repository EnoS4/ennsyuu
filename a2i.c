/*atoi関数と同じ機能のa2i関数を作れ*/
#include<stdio.h>
#include<string.h>

#define max 256

int a2i(int num);

int main(void)
{
//	char imp[max];
	int num;
	
	a2i(num);
	return 0;
}

int a2i(int num)
{
	num = atoi("1234a5");
	printf("文字列を整数型の数値、%dに変換\n", num);
	return 0;
}
