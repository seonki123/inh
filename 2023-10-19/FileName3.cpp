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
	printf("�л����Է�");
	scanf_s("%d", &num_students);

	struct Student* std;
	std = (struct Student*)malloc(sizeof(struct Student) * num_students);
	for (int i = 0; i < num_students; i++){
		printf("�л� # %d-%d �й��Է�:", num_students, i + 1);
			scanf_s("%d", &(std[i].sno));

			printf("�л� # %d-%d �̸��Է�:", num_students, i + 1);
			scanf_s("%d", &(std[i].name.10));

			printf("�л� # %d-%d �����Է�:", num_students, i + 1);
			scanf_s("%d", &(std[i].score)); 
		
	}
	for (int i = 0; i < num_students; i++) {
		sum += scores[i];

	}
	
	
}