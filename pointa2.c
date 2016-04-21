/*双方向リスト(配列)*/
#include<stdio.h>
#include<string.h>

#define max 5

typedef struct EMPLOYEE {
	char name[16];
} EMPLOYEE;

int main(void)
{
	EMPLOYEE empArray[5];
	int i,j;
	int arraySize;

	strcpy(empArray[0].name, "大野 智");
	strcpy(empArray[1].name, "櫻井 翔");
	strcpy(empArray[2].name, "相葉 雅紀");
	strcpy(empArray[3].name, "二宮 和也");
	strcpy(empArray[4].name, "松本 潤");
	arraySize = 5;

	for (i = 0; i < arraySize; i++) {
		printf("%sさん \n", empArray[i].name);
	}
	for (j = 4; j >= 0; j--) {
		printf("%sさん \n", empArray[j].name);
	}
	return 0;
}
