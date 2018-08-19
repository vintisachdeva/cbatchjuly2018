void main(){
	int element, array[5] = {100, 20, 50, 89, 45}, i, flag = 0;
	clrscr();

	printf("\nEnter element to find = ");
	scanf("%d", &element); // 50

	for(i = 0; i<5; i++){
	     if(element == array[i]){
		flag = 1;    // i =2 flag = 1
		break;
	     }
	}
	if(flag == 0){
		printf("Element not found");
	}else{
		 printf("Element found %d at index = %d", element, i);
	}
	getch();

}