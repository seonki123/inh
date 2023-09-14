#include<stdio.h>

int main() {
	
	int year;
	printf("정수를 입력하세여");
	scanf_s("%d",&year);

	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
		printf("%d년은 윤년입니다.\n", year);
	else
		printf("%d년은 윤년이 아닙니다.\n", year);
		



	

	

}
