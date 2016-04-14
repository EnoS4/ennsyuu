/*入力された５つの数字の中の最大値を出力するプログラムを作成せよ*/
#include<stdio.h>
#include<string.h>

int main(void) {
  int max;
  int n1, n2, n3, n4, n5;
  
  printf("数字を入力してください\n");
  scanf("%d", &n1);
  scanf("%d", &n2);
  scanf("%d", &n3);
  scanf("%d", &n4);
  scanf("", &n5);
  
  max = n1;
  if ( max < n2 ) {
    max = n2;
  }
  if ( max < n3 ) {
    max = n3;
  }
  if ( max < n4 ) {
    max = n4;
  }
  if ( max < n5 ) {
    max = n5;
  }
  
  printf("入力された数字の最大値は%dです\n", max)
  return 0;
  
}
