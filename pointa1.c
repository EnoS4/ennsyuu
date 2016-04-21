/*環状リスト(配列)*/
#include<stdio.h>
#include<string.h>

#define max 6

typedef struct EMPLOYEE {
	char name[16];
} EMPLOYEE;

int main(void)
{
	EMPLOYEE empArray[3];
	int i,j;
	int arraySize;

	strcpy(empArray[0].name, "池田 利栄");
	strcpy(empArray[1].name, "田中 賢吾");
	strcpy(empArray[2].name, "中野 秀樹");
	arraySize = 3;

	for (i = 0; i < max; i++) {
		for (j = 0; j < arraySize; j++) {
			printf("%sさん \n", empArray[j].name);
			if ( j > arraySize ) {
				j = j /4 ;
			}
		}
	}
	return 0;
}
