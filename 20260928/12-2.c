#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int a;
	int* p = &a;
	int** q = &p;
	int*** r = &q;

	printf("\n숫자를 입력하세요 : ");
	scanf("%d", &a);
	printf("입력한 숫자는 : %d\n", a);
	
	printf("\n숫자를 입력하세요 : ");
	scanf("%d", p);
	printf("입력한 숫자는 : %d\n", a);

	printf("\n숫자를 입력하세요 : ");
	scanf("%d", *q);
	printf("입력한 숫자는 : %d\n", a);

	printf("\n숫자를 입력하세요 : ");
	scanf("%d", **r);
	printf("입력한 숫자는 : %d\n", a);

	return 0;
	
}