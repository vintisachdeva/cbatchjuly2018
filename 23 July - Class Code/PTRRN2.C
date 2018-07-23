/*

	54321
	4321
	321     	row = 5,1   column = row   col--
	21
	1

*/

void main(){

	int row, column;
	clrscr();

	for(row = 5; row>=1; row--)
	{
		for(column = row; column>=1; column--)
		{
			printf("%d",column);
		}
		printf("\n");
	}

	getch();

}