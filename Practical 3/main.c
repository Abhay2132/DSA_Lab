#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int * matrix1 , *matrix2, row1=0, col1=0, row2=0, col2=0;

void create();
void add();
void mulitply();
void transpose();
void isSparse(int matrixN);

int get(int * , int , int , int);
void set(int * , int , int , int , int );
void printMatrix(int *, int , int );

int main(int argc, char *argv[]) {
	matrix1 = (int *) malloc(sizeof(int));
	matrix2 = (int *) malloc(sizeof(int));
	
	int ch=9;
	do{
		printf("\t\t Matrix OPs \n");

		printf(" MATRIX 1 :- \n");
		printMatrix(matrix1, row1, col1);
		printf("\n MATRIX2 :- \n");
		printMatrix(matrix2, row2, col2);

		printf("\n\n Choose an option :- \n\n");
		
		printf(" 1.) Create Matrices\n");
		printf(" 2.) Add Matrices\n");
		printf(" 3.) Transpose of Matrix\n");
		printf(" 4.) Multiplication of Matrices\n");
		printf(" 5.) Sparse matrix check \n");
		printf(" 9.) EXIT\n");
		printf(" >> ");
		
		scanf("%d", &ch);
		
		switch(ch){
			case 1 : create(); break;
			case 2 : create(); break;
			case 3 : create(); break;
			case 4 : create(); break;
			case 5 : create(); break;
		}
		
		
	} while(ch != 9);
	printf("BYE BYE");
		return 0;
}


void printMatrix(int * matrix, int row, int col){
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			printf("%d ", get(matrix, i,j, row));
		}
		printf("\n");
	}
}

int get(int * matrix, int row, int col, int rowSize){
	return *(matrix + rowSize*row + col);
}

void set(int * matrix, int row, int col , int rowSize, int value){
	*(matrix + rowSize * row + col) = value;	
}

void create(){
	printf("\n Matrix1 :- \n");
	printf(" row and column size : ");

	scanf("%d %d", &row1, &col1);
	matrix1 = (int *) realloc(matrix1, sizeof(int)*(row1*col1));

	printf("\n Fill the Matrix1");
	for(int i=0; i<row1; i++){
		printf("\n ROW[%d] : ", i+1);
		for(int j=0; j< col1; j++){
			int value;
			scanf("%d", &value);
			set(matrix1, i,j, row1, value);
		}
	}

	
	printf("\n\n Matrix2 :- \n");
	printf(" row and column size : ");

	scanf("%d %d", &row2, &col2);
	matrix2 = (int *) realloc(matrix2, sizeof(int)*(row2*col2));

	printf("\n Fill the Matrix2");
	for(int i=0; i<row2; i++){
		printf("\n ROW[%d] : ", i+1);
		for(int j=0; j< col2; j++){
			int value;
			scanf("%d", &value);
			set(matrix2, i,j, row2, value);
		}
	}

}
