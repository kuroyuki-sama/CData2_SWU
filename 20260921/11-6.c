#include <stdio.h>
#include <conio.h>

int main() {
	int ch;

	printf("문자를 입력하세요. q를 입력하면 프로그램이 종료됩니다. \n");

	while (1) {
		ch = _getch();
		
		if (ch == 'q') {
			printf("\n프로그램을 종료합니다.\n");
			break;
		}

		_putch(ch);
	}

	return 0;
}