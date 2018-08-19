void main(){
	int i, marks[5]; //= {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	clrscr();

       /*	printf("\n0th index value = %d", marks[0]);
	printf("\n1st index value = %d", marks[1]);
	printf("\n2nd index value = %d", marks[2]);

	*/
	printf("\nEnter 5 values \n");

	for(i = 0; i<5; i++){

		scanf("%d", &marks[i]);

	}
	printf("\n Array elements with index are:\n");
	for(i = 0; i<5; i++){
		printf("\n marks[%d] value = %d", i , marks[i]);
	}

	getch();

}