#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main() {
	char str1[] = "c language!";
	char str2[12] = { 'c', ' ', 'l', 'a', 'n', 'g','u','a','g','e','!' };
	char str3[12] = "c language!";
	char str4[12];

	strcpy(str4, "c language!");

	printf("str1[] = %s\n", str1);
	printf("str2[12] = %s\n", str2);
	printf("str3[12] = %s\n", str3);
	printf("str4[12] = %s\n", str4);

	return 0;
}