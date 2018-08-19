void main(){
	int i, j, k, matrix1[2][2], matrix2[2][2], matrix3[2][2], sum = 0;
	clrscr();

	printf("\nEnter values in matrix1\n");

	for(i = 0; i<2; i++){
		for(j = 0; j<2; j++){
			scanf("%d", &matrix1[i][j]);
		}
	}

	printf("\nEnter values in matrix2\n");

	for(i = 0; i<2; i++){
		for(j = 0; j<2; j++){
			scanf("%d", &matrix2[i][j]);
		  //	matrix3[i][j] = 0;
		}
	}


		for(i = 0; i<2; i++){
		for(j = 0; j<2; j++){
			matrix3[i][j] = 0;
		}

	}

	for(i = 0; i<2; i++){    // 0<2
		for(j = 0; j<2; j++){  // 1<2          // 1 2 3 4     5 6 7 8
			for(k = 0; k<2; k++)   // 0<2
			{                           //matrix3[0][1] =  5  + 14 --> 19
		   matrix3[i][j] = sum + (matrix1[i][k] * matrix2[k][j]);

		   //matrix3[i][j] = matrix3[i][j] + (matrix1[i][k] * matrix2[k][j]);
			}
		}
	}

	printf("\nOutput is:\n");

	for(i = 0; i<2; i++){
		for(j = 0; j<2; j++){
			printf("%d\t", matrix3[i][j]);
		}
		printf("\n");
	}
	getch();
}