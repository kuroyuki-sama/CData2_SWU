#include <stdio.h>

int main() {
	char* string[3] = {
		"How are you?",
		"hello World!",
		"C language Programming."
	};

	for (int i = 0; i < 3; i++) {
		printf("%s\n", string[i]);
	}
	return 0;
}