#include <stdio.h>
#include<stdlib.h>

void swap(int* pa, int* pb)
{
	int c = *pa;
	*pa = *pb;
	*pb = c;
}

void sort(int* arr, int len){

	for (int i = 0; i < 5;  i++) {
		int min = 99999;
		int min_idx = -1;
		for (int j = i; j < 5; j++) {
			int val = arr[j];
			if (val < min) {
				min = val;
				min_idx = j;
			}

		}

		swap(&arr[i], &arr[min_idx]);
	}
}

int main(void)
{
	int i;
	int j;

	int arr[5] = { 5,4,1,2,3 };

	for (i = 0; i < 5; i++) {
		
		for (j = 0; j < 5; j++) {
			if (arr[i] < arr[j]) {
				swap(&i, &j);
			}
		}
	}

	printf("result : ");
	for (i = 0; i < 5; i++)
		printf("%d", arr[i]);
}