#include <stdio.h>

int add(int a, int b) { return a + b; }
int subtract(int c, int d) { return c - d; }
int multiply(int e, int f) { return e * f; }

int main() {
	int (*operation[3])(int, int) = { add, subtract, multiply };

	int sum = operation[0](10, 5);
	int sub = operation[1](10, 5);
	int mul = operation[2](10, 5);

	printf("덧셈 : %d\n", sum);
	printf("뺄셈 : %d\n", sub);
	printf("곱셈 : %d\n", mul);

	return 0;
}