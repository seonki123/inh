#include<stdio.h>

void main() {

	char season;

	printf("�� : A �Ǵ� a\n");
	printf("���� : S �Ǵ� s\n");
	printf("���� : D �Ǵ� d\n");
	printf("�ܿ� : F �Ǵ� f\n");
	printf("�����ϴ� ������ �ش��ϴ� ���ĺ� �Է� : ");
	scanf_s("%c", &season, sizeof(season));


	switch (season)
	{
	    case'A':
		case'a':
			printf("������ ������ ��\n");
			printf("���� �����ϴ�");
			break;
		case'S':
		case's':
			printf("������ ������ ����\n");
			printf("������ ����");
			break;
		case'D':
		case'd':
			printf("������ ������ ����\n");
			printf("������ �ҽ��ϴ�");
			break;
		case'F':
		case'f':
			printf("������ ������ �ܿ�\n");
			printf("�ܿ��� ���");
			break;
	}
	



}