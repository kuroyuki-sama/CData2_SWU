#include <stdio.h> 

int main() {
	int a[5] = { 2,4,6,8,10 };
	int* ptr = a;

	for (int i = 0; i < 5; i++) {
		printf("*(ptr + %d) = %d\n", i, *(ptr + i));

	}

	return 0;
}