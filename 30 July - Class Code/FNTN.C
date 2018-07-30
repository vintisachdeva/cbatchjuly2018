#include<stdio.h>
#include<conio.h>

int sum(int, int);

void main(){
	int first, second, result;
	clrscr();

	printf("\nEnter your first value = ");
	scanf("%d", &first);

	printf("\nEnter your second value = ");
	scanf("%d", &second);

	printf("\nResult is = %d ", sum(first, second));

	//result = sum(first, second);

	getch();
}

int sum(int num1, int num2){

       return num1 + num2;

}
