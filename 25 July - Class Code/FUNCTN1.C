// addition of two numbers using function --> no return type, no argument

#include<stdio.h>
#include<conio.h>

// C language --> function prototype
// Top to Down Approach

//void add();  // prototype of add function
int add();
void subtract();

void main()
{
    int value;

    clrscr();
    value = add() * 5;
    printf("value = %d", value);

    //printf("Result is = %d " , add());  // function calling

    //subtract();
    getch();
    //return 34;

}

void subtract(){

	int first, second, result;

       //	printf("%d", value);
	printf("Enter your first number = ");
	scanf("%d", &first);

	printf("\nEnter your second number = ");
	scanf("%d", &second);

	result  = first - second;

	printf("\nSubtraction is = %d", result);

}

int add()
{
	int first, second, result;

	printf("Enter your first number = ");
	scanf("%d", &first);

	printf("\nEnter your second number = ");
	scanf("%d", &second);

	result  = first + second;

	//printf("\nAddition is = %d", result);

	return result; //to the calling point
}


