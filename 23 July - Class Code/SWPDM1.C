// with using third variable

#include<stdio.h>
#include<conio.h>
void main(){
	int first = 10, second = 20, third;
	clrscr();

	third = first; // third = 10 first = 10
	first = second;	// second = 20 first =  20
	second = third; // second = 10 third = 10

	printf("First = %d\n", first);
	printf("Second = %d\n", second);

	getch();
}
