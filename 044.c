#include <stdio.h>
static int times;

void altprintMatrix(int a,int b, int x[a][b]) {
	extern int times;
	for (int i=0;i<a;i++) {
		for (int j=0;j<b;j++) {
			printf("The element at row %d and column %d of Matrix %d is %d\n",i+1,j+1,times,x[j][i]);
		}
	}
}

void printMatrix(int a,int b,int x[a][b]) {
	extern int times;
	times++;
	printf("\nMatrix %d\n",times);
	printf("|");
	for (int i=0;i<a;i++) {
		for (int j=0;j<b;j++) {
			printf(" %d ",x[j][i]);
		}
		if (i==a-1) {
			printf("|\n");
		}
		else 
		printf("|\n|");
	}
}

int takeinput(int a,int b, int x[a][b]) {
	extern int times;
	times++;
	for (int i=0;i<a;i++) {
		for (int j=0;j<b;j++) {
			printf("Enter the element at row %d coloumn %d of Matrix %d\n",i+1,j+1,times);
			scanf("%d",&x[j][i]);
		}
	}
	return x[a][b];
}

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
	
	takeinput(m1,n1,matrix1);
	takeinput(m2,n2,matrix2);
	
	// altprintMatrix(m1,n1,matrix1);
	
	// altprintMatrix(m2,n2,matrix2);
	
	// Matrix 1 
	printMatrix(m1,n1,matrix1);
		
	// Matrix 2 
	printMatrix(m2,n2,matrix2);
	
	printf("The size of Matrix 1 is %lu\n",sizeof(matrix1));
	printf("The size of Matrix 2 is %lu\n",sizeof(matrix2));
	
	// Multiplying the matrices
	int m3,n3;
	m3=m1;
	n3=n2;
	int matrix3[m3][n3];
	if (n1==m2) {
		printf("The multiplication gives the following matrix\n");
	}
	else {
		printf("The given matrix cannot be multiplied because n's are not the same\nIn a matrix multiplication with order mXn x nXp \n the n's should be same");
	}
}

