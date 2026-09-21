#include <stdio.h>

int main() {
	int ch;

	while (1) {
		printf("\n키보드로부터 1개의 문자 입력(반복종료:ctrl+Z)>> ");
		ch = getchar();

		if (ch == EOF) {
			break;
		}
		putchar(ch);

		while ((ch = getchar()) != '\n' && ch != EOF) {
		}

	}

	printf("\nEOF가 입력되어 반복 종료됨.");

	return 0;
}