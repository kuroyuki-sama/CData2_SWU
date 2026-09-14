#include <stdio.h>

int main() {
	int num = 50;
	int* pnum = &num;

	printf("*(pnum) = %d\n", *pnum);
	printf("*(pnum--) = %d\n", *(pnum--));
	printf("*(--pnum) = %d\n", *(--pnum));

	return 0;
}