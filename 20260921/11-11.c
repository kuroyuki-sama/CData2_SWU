#include <stdio.h>

int main() {
	char str[100];

	printf("문자열 입력 : ");
	fgets(str, sizeof(str), stdin);

	printf("당신이 입력한 문자열 : ");
	fputs(str, stdout);

	return 0;
}