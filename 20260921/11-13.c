#include <stdio.h>	
#include <string.h>
#pragma warning(disable:4996)

int main() {
	char str[] = "Hello, World! Welcome to C programming.";
	const char delim[] = " ,.!";

	char* token = strtok(str, delim);

	while (token != NULL) {
		printf("%s\n", token);
		token = strtok(NULL, delim);
	}

	return 0;
}