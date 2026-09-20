#include <stdio.h>
#pragma warning(disable:4996)
#define MAXSIZE 50
void bubble(int *grade, int num);

int main() {
	int stnum;
	int grad[MAXSIZE];
	int* gradpointer = grad;

	printf("학생 수를 입력하세요. (최대 50명) :");
	scanf("%d", &stnum);
	if (stnum > MAXSIZE) { 
		printf("학생수는 최대 50명입니다. \n"); 
		return 1;
	}
	for (int i = 0; i < stnum; i++) {
		printf("%d번 학생의 최종 성적을 입력하세요. : ", i + 1);
		scanf("%d", gradpointer + i);
	}
	bubble(grad, stnum);

	printf("\n정렬된 성적 : ");
	for (int j = 0; j < stnum; j++) {
		printf("%d ", *(gradpointer + j));
	}
	printf("\n최고 성적 : %d\n", *(gradpointer + stnum - 1));
	printf("최하 성적 : %d\n", *gradpointer);

	return 0;
}

void bubble(int* grade, int num) {
	for (int i = 0; i < num - 1; i++) {
		for (int j = 0; j < num - 1; j++) {
			if (*(grade + j) > *(grade + j + 1)) {
				int temp = *(grade + j);
				*(grade + j) = *(grade + j + 1);
				*(grade + j + 1) = temp;
			}
		}
	}
}