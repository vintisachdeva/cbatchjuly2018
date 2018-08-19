
union student{
	int rollno;
	char name[25];
	int percentage;
};
void main(){
	union student s1;
	clrscr();

	printf("Size = %d", sizeof(s1));

	s1.percentage = 80;
	strcpy(s1.name, "Ram");
	s1.rollno = 65;

	printf("\nRollno = %d", s1.rollno);
	printf("\nPercentage = %d\n", s1.percentage);
	//printf("\nName = %c\n", s1.name);
	puts(s1.name);

	getch();
}