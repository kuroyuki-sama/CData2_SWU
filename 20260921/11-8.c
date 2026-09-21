#include <stdio.h>
#include <ctype.h>	

int main() {
	char ch = 'a';

	printf("원본 문자 : %c\n", ch);
	printf("대문자로 변환 : %c\n", toupper(ch));
	printf("소문자로 변환 : %c\n", tolower(ch));
	printf("아스키코드로 변환 : %d\n", toascii(ch));

	return 0;
}