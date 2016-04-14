/*入力された５つの数字の中の最大値を出力するプログラムを作成せよ*/
#include<stdio.h>
#include<string.h>

int main(void) {
  int cnt, max;
  int number[5];
  
  for (cnt = 0; cnt < 5; cnt++) {
    printf("数字を入力してください\n", cnt + 1);
    scanf("%d %d %d %d %d", &number[0], &number[2], &number[3], &number[4], &number[5]);// 
  }
  max = number[0];
  if ( max < number[cnt]) {
  	max = number[cnt];
  }
  printf("入力された数字の最大値は%dです\n", max);
  return 0;
  
}
