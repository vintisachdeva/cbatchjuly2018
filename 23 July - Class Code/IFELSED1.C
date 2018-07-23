#include<stdio.h>
#include<conio.h>
void main(){
	int first, second, third, fourth, fifth;
	clrscr();

	// user interaction
	printf("Enter your first value = ");
	scanf("%d", &first);

	printf("\nEnter your second value = ");
	scanf("%d", &second);

	printf("\nEnter your third value = ");
	scanf("%d", &third);

	printf("\nEnter your fourth value = ");
	scanf("%d", &fourth);

	printf("\nEnter your fifth value = ");
	scanf("%d", &fifth);

	// && --> Logical AND
	// 100 > 200-> false && 100 > 700
	// first = 500 second = 1400 third = 3000 fourth = 200 fifth = 100

	if(first > second && first > third && first > fourth && first > fifth)
	{
		printf("First is greater");
	}
	else if(second > third && second > fourth && second > fifth)
	{
		printf("Second is greater");
	}
	else if(third > fourth && third > fifth)
	{
		printf("Third is greater");
	}
	else if(fourth > fifth)
	{
		printf("Fourth is greater");
	}
	else{
		printf("Fifth is greater");
	}

	// condition       // first = 100 second = 200 third = 700
       /*	if(first > second)  // 100 > 200
	{
		if(first > third)   // 100 > 70
		{
			if(first > fourth)
			printf("First is greater");
		}
	}
	else{
		if(second > third)   // 200 > 700 --> false
		{
			printf("Second is greater");
		} else{
			printf("Third is greater");
		}
	}
	*/
	getch();
}