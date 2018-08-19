void main(){
	int row, col, values[2][2] = {
			     {1, 2}, // 00 01
			     {3, 4}  // 10 11
			   };
	clrscr();

	//printf("%d", values[0][0]);

	for(row = 0; row<2; row++)
	{

		for(col = 0; col<2; col++)
		{
			printf("%d\t", values[row][col]);
		}
		printf("\n");
	}
	getch();
}