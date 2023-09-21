#include<stdio.h>

int main() {
	

	isprime;

	scanf_s("%d", &num);
	printf("%d",isprime(num));
	

	return 0;
}

int isprime(int num)
{
	for (int div = num - 1; div > 1; div--) {
		if (num % div == 0)
			return 0;
	}
	return 1;
}