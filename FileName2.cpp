#include<stdio.h>
#include<stdlib.h>




int main() {

	int num_students;
	printf("학생수 입력");
	scanf_s("%d", &num_students);

	int* scores;
	scores = (int*)malloc(sizeof(int) * num_students);
	
	for (int i = 0; i < num_students; i++) {
		printf("학생 # %d-%d 성적입력:", num_students, i + 1);
		scanf_s("%d", scores+1);
	}
	int sum = ; 0;
	for (int i = 0; i < num_students; i++) {
		sum += scores[i];
	
	}
	printf("%d\n", sum);

}