#include<stdio.h>
#include<stdlib.h>

void main() {
	char ch;
	char str[10];

	printf("1.���� �Է�:");
	scanf_s("%c", &ch, sizeof(ch));

	printf("2. ���ڿ� �Է�:");
	scanf_s("%s", str, sizeof(str));

	printf("�Է��� ���� ���:%c\n", ch);
	printf("�Է��� ���ڿ� ���:%s\n",str);

}

//int ������ ������ 4����Ʈ�� X //