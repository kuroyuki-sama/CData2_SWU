#include <stdio.h>
#pragma warning(disable:4996)

double MBperS(double* file_size, double* sending_time, int num) {
	double mbs;
	double totalsize = 0.0, totaltime = 0.0;
	for (int i = 0; i < num; i++) {
		totalsize += file_size[i];
		totaltime += sending_time[i];
	}

	mbs = totalsize / totaltime;
	return mbs;
}


int main() {
	double size[100];
	double sendtime[100];
	int filenum;

	printf("전송할 파일의 개수: ");
	scanf("%d", &filenum);
	if (filenum > 100) {
		printf("파일의 최대 개수는 100 입니다.\n");
		return 1;
	}
	for (int i = 0; i < filenum; i++) {
		printf("파일 %d 크기 (MB) : ", i + 1);
		scanf("%lf", &size[i]);
		printf("파일 %d 전송 시간 (s) : ", i + 1);
		scanf("%lf", &sendtime[i]);
	}

	double mbs = MBperS(size, sendtime, filenum);
	printf("필요한 최소 대역폭: %.2lf MB/s\n", mbs);
	return 0;

}