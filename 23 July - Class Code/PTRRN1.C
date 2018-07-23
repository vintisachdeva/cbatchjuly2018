/*
    *****
    ****
    ***        row =5,1  column =   1 , row (4)       ****
    **
    *

    1
    12            row = 1,5(2) col = 1, row(2)      1
    123
    1234
    12345


*/


void main(){

	  int row, column;
	  clrscr();

	  for(row = 1; row<=5; row++)
	  {
		for(column = 1; column<=row; column++)
		{
			printf("%d", column);

		}
		printf("\n");
	  }


	 /* for(row = 5; row>=1; row--)
	  {
		for(column = 1; column<=row; column++)
		{
			printf("*");
		}
		printf("\n");
	  }
	   */
	  getch();

}