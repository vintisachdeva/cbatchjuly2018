void main()
{
	int row, col1, col2, space;
	clrscr();
	printf("*************\n");

	for(row = 1; row<=6; row++)
	{

		for(col1 = 6; col1>=row; col1--){

			printf("*");
		}
		for(space = 1; space< (2 * row); space++){  // 1<4

		       printf(" ");
		}
		for(col2 = 6; col2>=row; col2--){

			printf("*");
		}
		printf("\n");
	}
	getch();
}

