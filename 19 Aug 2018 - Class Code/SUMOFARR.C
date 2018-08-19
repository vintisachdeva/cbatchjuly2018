void main(){
	int values[5], i, sum = 0;
	clrscr();

	printf("\nEnter 5 values : \n");

	for(i = 0; i<5; i++)
	{
		scanf("%d", &values[i]);
		sum = sum + values[i];
	}
	/*
	for(i = 0; i<5; i++){
		sum = sum + values[i];
	}
	*/
	printf("\nSum is = %d", sum);
	getch();
}