#include <stdio.h>

void increment(int* ptr) { (*ptr)++; }

void execute(void (*func)(int*), int* value) { func(value); }

int main() {
	int a = 10;
	void (*func)(int*) = increment;
	execute(func, &a);
	printf("a = %d\n", a);

	return 0;
}