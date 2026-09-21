#include <stdio.h>

int main() {
	char words[] = "Today is a good day.";
	int i = 0;

	while (words[i] != NULL) {
		printf("%c ", words[i++]);
	}

	printf("\nwords 변수의 문자열 길이는 %d입니다.\n", i);

	return 0;
}