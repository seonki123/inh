#include<stdio.h>
#include<stdlib.h>

struct Student
{
	int sno;
	char name[10];
	int score;

};

int main() {

	int num_students;
	printf("학생수입력");
	scanf_s("%d", &num_students);

	struct Student* std;
	std = (struct Student*)malloc(sizeof(struct Student) * num_students);
	for (int i = 0; i < num_students; i++){
		printf("학생 # %d-%d 학번입력:", num_students, i + 1);
			scanf_s("%d", &(std[i].sno));

			printf("학생 # %d-%d 이름입력:", num_students, i + 1);
			scanf_s("%d", &(std[i].name.10));

			printf("학생 # %d-%d 점수입력:", num_students, i + 1);
			scanf_s("%d", &(std[i].score)); 
		
	}
	for (int i = 0; i < num_students; i++) {
		sum += scores[i];

	}
	
	
}