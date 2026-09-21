#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int paland(char text[]) {
	int left = 0;
	int right = strlen(text) - 1;

	while (left < right) {
		if (text[left] < 'A' || (text[left] > 'Z' && text[left] < 'a') || text[left] > 'z') {
			left++;
			continue;
		}
		
		if (text[right] < 'A' || (text[right] > 'Z' && text[right] < 'a') || text[right] > 'z') {
			right--;
			continue;
		}

		if (tolower(text[left]) != tolower(text[right])) {
			return 0;
		}
		left++;
		right--;
	}
	return 1;

}

int main() {
	char input[1000];
	printf("문자열을 입력하세요 : ");
	fgets(input, sizeof(input), stdin);
	input[strcspn(input, "\n")] = "\0";

	if (paland(input)) {
		printf("입력한 문자열은 팰린드롬입니다.\n");
	}
	else {
		printf("입력한 문자열은 팰린드롬이 아닙니다.\n");
	}
	return 0;
}