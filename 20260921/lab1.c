#include <stdio.h>
#include <string.h>
#include <ctype.h>
#pragma warning(disable:4996)

void toMorse(char* text) {
	char* morseAlphabet[] = {
		".-", "-...", "-.-.", "-..", ".", "..-", "--", "....", "..", ".---", "-.-", ".-..",
		"--", "-.", "---", ".--", "--.-", ".-.", "...", "-", "..-", "...-", ".--", ".--", "-..-", "-.--", "--.." };

	int textlen = strlen(text);

	for (int i = 0; i < textlen; i++) {
		if (isalpha(text[i])) {
			int idx = 0;
			if (isupper(text[i])) {
				idx = text[i] - 'A';
			}
			else { idx = text[i] - 'a'; }
			printf("%s", morseAlphabet[idx]);
		}

		else if (text[i] = ' ') {
			printf('/');
		}
	}
	printf("\n");
	
}

int main() {
	char input[1000];

	printf("문장을 입력하세요 : ");
	scanf("%[^\n]s", input);

	toMorse(input);

	return 0;
}