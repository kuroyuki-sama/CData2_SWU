#include <stdio.h>
#define SIZE 10

int main() {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int* start;
	int* end;

	printf("Array forward :");
	for (start = arr, end = arr + SIZE; start < end; start++) {
		printf("%3d", *start);
	}
	printf("\n");
	
	printf("Array Backward:");
	for (end = start - 1; end >= arr; end--) {
		printf("%3d", *end);
	}
	return 0;
}