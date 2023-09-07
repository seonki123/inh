#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	int a;
	int b;
	int c;
	int num;

	printf("n의 숫자를 입력하여 피라미드 만들기 : ");
	scanf_s("%d", &num);

	for (a = 0; a < num; a++)
	{
		for (b = a; b <= num - 1; b++) {
			printf(" ");
		}
		for (c = 0; c <= (a * 2); c++) {
			printf("*");
		}
		printf("\n");
	}


	return 0;
}