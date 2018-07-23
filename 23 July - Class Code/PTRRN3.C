/*
     EDCBA
     EDCB          row = B , E --> B  column = E, row->(B)    print --> column
     EDC
     ED
     E


	   *     --> 1
	  ***    --> 3
	 *****       5
	*******      7
       *********     9


*/

void main(){

	int row, column, space;
	clrscr();

	for(row = 1; row <= 5; row++)  // 2<=5
	{
	      for(space = 4; space >=row; space--) // 4>=2
	      {
		   printf(" ");  //  ___
	      }
	      for(column = 1; column <= (2*row-1); column++) // 4<4
	      {
			printf("*");  // ____*
	      }                       // ___*
	      printf("\n");
	}



      /* for(row = 1; row <= 9; row+=2)  // 3<=9
	{
	      for(space = 7; space >=row; space-=2) // 1>=3
	      {
		   printf(" ");  //  ___
	      }
	      for(column = 1; column <= row; column++) // 3<=3
	      {
			printf("*");  // ____*
	      }                       // ___***
	      printf("\n");
	}
	*/
	getch();


}