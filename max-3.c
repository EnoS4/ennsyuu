/*入力値から最大値求めよ*/
#include<stdio.h>

#define cnt 5

int main(void)
{
  int max, i;
  int num[cnt];
  printf("数字を%d個入力してね。\n", cnt);
  
  for (i = 0; i < cnt; i++) {
    scanf("%d",&num[i]);
  }
  
  max = num[i];
  for (i = 0; i < cnt; i++) {
    if (max < num[i]) {
    max = num[i];
    }
  }
  printf("最大値は%d\n", max);
  return 0;
}
