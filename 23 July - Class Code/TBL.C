void main(){
	int num = 1, userChoice, result;
	clrscr();

	printf("Enter your number = ");
	scanf("%d", &userChoice);

	while(num<=10){
		// 2 X 1 = 2
		result = userChoice * num;
		printf("%d X %d = %d\n",userChoice, num, userChoice * num);
		num++;
	}
	getch();

}