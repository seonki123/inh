#include<stdio.h>

void main() {

	char season;

	printf("봄 : A 또는 a\n");
	printf("여름 : S 또는 s\n");
	printf("가을 : D 또는 d\n");
	printf("겨울 : F 또는 f\n");
	printf("좋아하는 계절에 해당하는 알파벳 입력 : ");
	scanf_s("%c", &season, sizeof(season));


	switch (season)
	{
	    case'A':
		case'a':
			printf("선택한 계절은 봄\n");
			printf("봄은 따듯하다");
			break;
		case'S':
		case's':
			printf("선택한 계절은 여름\n");
			printf("여름은 덥다");
			break;
		case'D':
		case'd':
			printf("선택한 계절은 가을\n");
			printf("가을은 쌀쌀하다");
			break;
		case'F':
		case'f':
			printf("선택한 계절은 겨울\n");
			printf("겨울은 춥다");
			break;
	}
	



}