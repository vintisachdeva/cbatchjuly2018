#include<stdio.h>
#include<conio.h>

struct student{
	int rollno;
	char name[25];
	float percentage;
};

void main(){

	struct student s1;
	clrscr();
	printf("%d", sizeof(s1));

	s1.rollno  = 1;
	s1.percentage = 89.65;
	strcpy(s1.name, "Ram");

	printf("\nRollno = %d", s1.rollno);
	printf("\nPercentage = %f\n", s1.percentage);
	puts(s1.name);	// puts()  and gets()
	//s1.name = "Ram";

	getch();
}