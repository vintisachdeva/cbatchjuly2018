void main(){
	int rem, userChoice, temp, sum = 0;
	clrscr();

	printf("Enter your number = ");	// 153
	scanf("%d", &userChoice);

	temp = userChoice;    // 153

	while(userChoice>0){    // 15>0
	    rem = userChoice % 10;		// 15 --> rem = 5
	    sum = sum + (rem * rem * rem);      // sum --> 27 + 125 = 153
	    userChoice = userChoice / 10;	// userchoice  = 0
	}
	if(sum == temp){
	      printf("\nIts an Armstrong Number = %d",temp);
	}else{
		printf("\nIts not an Armstrong Number = %d",temp);

	}
	getch();
}