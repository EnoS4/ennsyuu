/*入力された英字の中から母音を出力するプログラムを作成せよ*/
#include<stdio.h>
#include<string.h>

#define max 256

int main(void)
{
  char str[max];
  int i,j;
  char cmp[] = "aiueoAIUEO";

  fgets(str,max,stdin);

  for (i = 0; i < strlen(str); i++)
  for (j = 0; j < strlen(cmp); j++)
  if(str[i] == cmp[j]){
  putchar(str[i]);
  break;
  }
return 0;
}
