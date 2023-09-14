#include<stdio.h>

void main() {
	int count, 
	int sum=0;

	for (count = 1; count <= 10; count++)
		if (count % 2 == 1) {
			sum = sum + count;
			printf("count= %d ","sum=%d", count, sum);
		}
	
	}