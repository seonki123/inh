#include<stdio.h>

int main() {

	int i;
	printf("자연수를 입력하세여");
	scanf_s("%d", &i);

	if (i % 2 == 0)
		printf("%d는 짝수입니다", i);
	else
		printf("%d는 홀수입니다",i);




	return 0;


}
