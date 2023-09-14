#include<stdio.h>

void main() {

	int i;
	printf("점수를 입력하세여");
	scanf_s("%d", &i);
	if (i > 100 || i < 0)
		printf("잘못 입력하셨습니다");
	else if (i  >= 90)
		printf("A학점 입니다");
	else if (i >=80)
		printf("B학점 입니다");
	else if (i >= 70)
		printf("C학점 입니다");
	else if (i >= 60)
		printf("D학점 입니다");
	else
		printf("F학점 입니다");
	


}