void main(){
	int i, first[5], second[5];
	clrscr();

	printf("\nEnter 5 values\n");

	for(i = 0; i<5; i++){
		scanf("%d", &first[i]);
		second[i] = first[i];
	}

	printf("\nCopied values are : \n")

	for(i  = 0; i<5; i++){
		printf("%d\n", second[i]);
	}

	getch();


}