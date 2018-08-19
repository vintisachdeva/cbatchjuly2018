void main(){
	int array[5], i, max, position = 0;
	clrscr();

	printf("\nEnter 5 values : \n");
	for(i = 0; i<5; i++){

		scanf("%d", &array[i]);

	}
	max = array[0];// 100 2 35 43 5

	for(i = 1; i<5; i++)// i = 3
	{
		if(max < array[i])
		{
			max = array[i]; // array[2] = i= 2
			position = i;
		}
	}
	printf("Max element = %d at index = %d", max, position);
	getch();
}