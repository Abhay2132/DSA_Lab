#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int * matrix1, *matrix2, row1, col1, row2, col2;

void create();
void add();
void mulitply();
void transpose();
void isSparse(int matrixN);
int get(int targetN, int row, int col);
int set(int targetN, int row, int col, int value);

int main(int argc, char *argv[]) {
	
	int ch=9;
	do{
		printf("\t\t Matrix OPs \n");
		printf("Choose an option :- \n\n");
		
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

void create(){
	printf("\n Matrix1 :- \n");
	printf(" row : ");
	scanf("%d", &row1);
}
