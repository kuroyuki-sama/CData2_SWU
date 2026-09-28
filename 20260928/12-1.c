#include <stdio.h>
int main() {
	int a = 100;
	int* p = &a;
	int** q = &p;

	printf("a : %3d\n", a);
	printf("p = %3d\n", *p);
	printf("q = %3d\n", **q);
	
	return 0;
}