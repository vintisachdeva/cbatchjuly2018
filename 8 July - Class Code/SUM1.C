//Save --> Fn + f2 or F2
// arithmetic

#include<stdio.h>
#include<conio.h>
void main(){
	int value1 = 4, value2 = 2, result;   //int =  0
	clrscr();
	result = value1 + value2;  // addition
	printf("\nAddition = %d", result);         //

	result = value1 - value2;  // addition
	printf("\nSubtraction = %d", result);

	result = value1 * value2;  // addition
	printf("\nMultiplication = %d", result);

	result = value1 / value2;  // addition
	printf("\nDivision = %d", result);

	result = value1 % value2;  // addition
	printf("\nModulus = %d", result);

	value1++;	// 10++ -->value1 = value1 + 1
	printf("\nIncrement = %d", value1);

	value1--;
	printf("\nDecrement = %d", value1);

	getch();

}

