
#include<stdio.h>
#include<string.h>

#define max 5

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

	for (j = 0; j < max; j++) {
		for (i = 0; i < arraySize; i++) {
			printf("%sさん \n", empArray[i].name);
		}
		if ( i > arraySize ) {
			i = 0;
		}
		for (i = 0; i < arraySize; i++) {
			printf("%sさん \n", empArray[i].name);
		}
	}
	return 0;
}
