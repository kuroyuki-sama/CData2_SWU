#include <stdio.h>
#pragma warning(disable:4996)

int add(int a, int b) {
	return a + b;
}

int sq(int x, int y) {
	int (*addptr)(int a, int b) = add;
	int added = addptr(x,y);
	return added * added;
}

int main() {
	int int1, int2;
	scanf("%d %d", &int1, &int2);

	printf("%d\n", sq(int1, int2));

	return 0;
}