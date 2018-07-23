// swap without third variable

#include<stdio.h>
#include<conio.h>
void main(){
	int first, second;
	clrscr();

	// user interaction --> stdio.h --> scanf("format",variable address);

	printf("Enter your first value = ");
	scanf("%d",&first); // & --> addressOf operator --> variable --> variable address

	printf("\nEnter your second value = ");
	scanf("%d",&second); // & --> addressOf operator --> variable --> variable address


	first = first + second;	// first = 100 second = 60 = first= 160
	second = first - second; // 160 - 60 = second = 100
	first = first - second;  // 160 - 100 = first = 60

	printf("\nFirst = %d", first);
	printf("\nSecond = %d", second);

	getch();
}