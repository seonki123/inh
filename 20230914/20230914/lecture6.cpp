#include<stdio.h>

void main() {

	int i;
	printf("������ �Է��ϼ���");
	scanf_s("%d", &i);
	if (i > 100 || i < 0)
		printf("�߸� �Է��ϼ̽��ϴ�");
	else if (i  >= 90)
		printf("A���� �Դϴ�");
	else if (i >=80)
		printf("B���� �Դϴ�");
	else if (i >= 70)
		printf("C���� �Դϴ�");
	else if (i >= 60)
		printf("D���� �Դϴ�");
	else
		printf("F���� �Դϴ�");
	


}