struct student{
	int rollno;
	char name[20];
	float percentage;
};

void main(){
	struct student s1[2];
	int i;
	clrscr();
	printf("Enter Rollno, name and percentage for 2 records : ");

	for(i = 0; i<2; i++){
		scanf("%d", &s1[i].rollno);
		scanf("%s", &s1[i].name);
		//gets(s1[i].name);
		scanf("%f", &s1[i].percentage);
	}


	printf("\n Two records are : ");

	for(i = 0; i<2; i++){
		printf("\nRollno for s1[%d] = %d", i, s1[i].rollno);
		printf("\nName for s1[%d] = %s",i, s1[i].name);
		//puts(s1[i].name);
		printf("\nPercentage for s1[%d] = %f", i, s1[i].percentage);
	}
	getch();
}