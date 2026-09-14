#include <stdio.h> 

int main() {
	int a[5] = { 2,4,6,8,10 };
	int* p = a;
	int i = 0;

	printf("a[i] = %d\n", a[i]);
	printf("p : %d\n", *p);

	return 0;
}

