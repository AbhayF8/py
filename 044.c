#include <stdio.h>


int main() {
	int m1,n1,m2,n2;
	printf("Rows in Matrix 1\n");
	scanf("%d",&m1);
	printf("Columns in Matrix 1\n");
	scanf("%d",&n1);
	printf("Rows in Matrix 2\n");
	scanf("%d",&m2);
	printf("Columns in Matrix 2\n");
	scanf("%d",&n2);
	
	int matrix1[m1][n1];
	int matrix2[m2][n2];
	
	for (int i=0;i<m1;i++) {
		for (int j=0;j<n1;j++) {
			printf("Enter the element at row %d coloumn %d of Matrix 1\n",i+1,j+1);
			scanf("%d",&matrix1[j][i]);
		}
	}
	for (int i=0;i<m2;i++) {
		for (int j=0;j<n2;j++) {
			printf("Enter the element at row %d column %d of Matrix 2\n",i+1,j+1);
			scanf("%d",&matrix2[j][i]);
		}
	}

	for (int i=0;i<m1;i++) {
		for (int j=0;j<n1;j++) {
			printf("The element at row %d and column %d of Matrix 1 is %d\n",i+1,j+1,matrix1[j][i]);
		}
	}
	
	for (int i=0;i<m2;i++) {
		for (int j=0;j<n2;j++) {
			printf("The element at row %d and column %d of Matrix 2 is %d\n",i+1,j+1,matrix2[j][i]);
		}
	}
	
	// Matrix 1 
	printf("\nMatrix 1\n");
	printf("|");
	for (int i=0;i<m1;i++) {
		for (int j=0;j<n1;j++) {
			printf(" %d ",matrix1[j][i]);
		}
		if (i==m1-1) {
			printf("|\n");
		}
		else 
		printf("|\n|");
	}
		
	// Matrix 2 
	printf("\nMatrix 2\n");
	printf("|");
	for (int i=0;i<m2;i++) {
		for (int j=0;j<n2;j++) {
			printf(" %d ",matrix2[j][i]);
		}
		if (i==m2-1) {
			printf("|\n");
		}
		else 
		printf("|\n|");
	}
	
	// Multiplying the matrices
	int m3,n3;
	int matrix3[m3][n3];
	if (n1==m2) {
		printf("The multiplication gives the following matrix\n");
	}
	else {
		printf("The given matrix cannot be multiplied because n's are not the same\nIn a matrix multiplication with order mXn x nXp \n the n's should be same");
	}
}

