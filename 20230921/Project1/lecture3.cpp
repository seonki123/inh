#include<stdio.h>

int fectorial(int num) {
	if (num == 0) return 1;
	else
		return num * fectorial(num - 1);
}

int main() {

	int num;
	printf("���ڸ� �Է��ϼ���");
	scanf_s("%d", &num);
	printf("%d", fectorial(num));
	return 0;

}

