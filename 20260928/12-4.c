#include <stdio.h>

int add(int a, int b) {
	return a + b;
}

int square(int x) {
	return x * x;
}

int main() {
	int (*funcPtr)(int, int) = add;
	int sum = funcPtr(3, 5);
	printf("Sum : %d\n", sum);

	int (*squarePtr)(int) = square;
	int squared = squarePtr(4);
	printf("Squared : %d\n", squared);

	return 0;
}