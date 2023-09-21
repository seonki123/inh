#include<stdio.h>

void calculator(int selctor);
double sum(double num1, double num2);
double mul(double num1, double num2);
double div(double num1, double num2);
double sub(double num1, double num2);
int main() {
	int sel;

	printf("1더하기 2빼기 3곱하기 4나누기");
	scanf_s("%d", &sel);

	calculator(sel);

	return 0;


}

void calculator(int selector) {
	double num1, num2;

	printf("숫자1을 입력하시오");
	scanf_s("%lf", &num1);

	printf("숫자2를 입력하시오");
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


