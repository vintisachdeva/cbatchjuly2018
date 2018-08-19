void main(){
	int array[10], i, j;
	clrscr();

	printf("Enter size of array between [1-10]: ");
	scanf("%d", &i);  // 5
	array[i]; // array[5];

	for(j =0; j<i; j++){
		scanf("%d", array[j]);
	}

	getch();
}