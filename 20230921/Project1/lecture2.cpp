#include<stdio.h>

void calculator(int selctor);
double sum(double num1, double num2);
double mul(double num1, double num2);
double div(double num1, double num2);
double sub(double num1, double num2);
int main() {
	int sel;

	printf("1���ϱ� 2���� 3���ϱ� 4������");
	scanf_s("%d", &sel);

	calculator(sel);

	return 0;


}

void calculator(int selector) {
	double num1, num2;

	printf("����1�� �Է��Ͻÿ�");
	scanf_s("%lf", &num1);

	printf("����2�� �Է��Ͻÿ�");
	scanf_s("%lf", &num2);

	double res;

	if (selector == 1) res =sum(num1, num2);
	else if (selector == 2)res=sub(num1, num2);
	else if (selector == 3)res=mul(num1, num2);
	else if (selector == 4)res= div(num1, num2);

	printf("Result=%lf\n", res);
	
}


double sum(double num1, double num2) {
	return num1 + num2;
}

double sub(double num1, double num2) {
	return num1 - num2;
}

double mul(double num1, double num2) {
	return num1*num2;
}

double div(double num1, double num2) {
	return num1/num2;
}


