#include <stdio.h>

int main() {
	char* pstr = "Today is a good day.";
	printf("%s\n", pstr);

	int length = 0;
	while (pstr[length] != NULL) { length++; }

	printf("문자열의 길이 : %d\n", length);

	return 0;
}