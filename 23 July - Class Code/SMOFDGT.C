void main(){
	int sum = 0, rem, userChoice;
	clrscr();

	printf("Enter your number = ");
	scanf("%d", &userChoice);

	while(userChoice > 0){
	     rem = userChoice % 10;
	     sum = sum + rem;
	     userChoice = userChoice /10;
	}

	printf("Sum of digit is = %d", sum);
	getch();
}