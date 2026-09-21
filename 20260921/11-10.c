#include <stdio.h>	

int main() {
	char str[100];

	printf("Enter a string: ");
	fgets(str, sizeof(str), stdin);

	str[strcspn(str, "\n")] = 0;
	
	printf("You entered: ");
	puts(str);

	return 0;
}