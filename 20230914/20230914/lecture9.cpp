#include<stdio.h>

void main() {
	
	int a = 2;
	int b = 1;
	while (a<10)
	{
		if (a == 5) { a++; continue; }

		while (b<9)
		{
			printf("%d x %d = %d\n", a, b,a*b);
			b++;
		}
		a++;
		b = 1;
	}

}

