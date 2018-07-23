void main(){
	int rem, userChoice;
	clrscr();

	printf("Enter your number = ");
	scanf("%d", &userChoice);      // 123   --> 321

	while(userChoice > 0){ // 123 > 0

	       rem = userChoice % 10;    //123 % 10 --> 2
	       printf("%d", rem);	// 3
	       userChoice = userChoice / 10;	// 12

	}
	 getch();
}