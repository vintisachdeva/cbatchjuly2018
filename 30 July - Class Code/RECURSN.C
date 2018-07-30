
int fib(int);
void main() {

	int value;
	clrscr();

	printf("\nEnter your number = ");
	scanf("%d", &value);

	printf("Result is = %d", fib(value));
	getch();

}

int fib(int num){

	if(num==0 || num==1){   // num = 5 (5-1) = 4 (5-2) = 3 (5-3) = 2 (5-4)= 1
		return num;
	}
	return fib(num-1) + fib(num-2);
}