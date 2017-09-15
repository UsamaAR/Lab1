#include <iostream>
#include "Header.h"
#include "multThroughIteration.h"
#include "multThroughStarssan.h"
#include<ctime>
#include <cstdlib>
using namespace std;
#define N 2
void display(int[][N],int[][N]);
void iterationMult(int[][N], int[][N], int[][N]);
void starssanMult(int[][N], int[][N], int[][N], int , int , int , int , int , int , int );
int main(){
	
	int matrixA[N][N], matrixB[N][N], matrixC[N][N] = { 0 };
		int mult1,mult2, mult3, mult4, mult5, mult6, mult7; //declaration of the matrixes and their respective rows & columns
		mult1 = mult2 = mult3 = mult4 = mult5 = mult6 = mult7 = 0;
	srand(time(NULL));
	cout << "Enter the  elements for matrix A" << endl;// Getting the elements of Matrix A  by random number
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){

			matrixA[i][j] = rand() % 100;
		}
	}
	system("cls");

	cout << "Enter the  elements for matrix B" << endl; // Getting the elements of Matrix B  by random number generator
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			matrixB[i][j] = rand() % 100;
		}
	}

	/* Displaying both matrix A & B to the user */
	display(matrixA, matrixB);
		/* Multiplication through iterative method*/
	iterationMult(matrixA, matrixB, matrixC);
	
	/* Displaying the Result after iterative multiplication*/
	cout << "Displayig Result aftrer iterative multiplication:" << endl;
	cout << "MATRIX C: " << endl;
	cout << endl;
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){

			cout << matrixC[i][j] << "  ";
		}
		cout << endl;
	}
	starssanMult(matrixA, matrixB, matrixC, mult1, mult2, mult3, mult4, mult5, mult6, mult7);
	/*displaying result after strassen  multiplication*/
	cout << endl;
	cout << "DISPLAYING THE RESULT AFTER strassen MULTIPLICATION" << endl;
	cout << "MATRIX C: " << endl;
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){

			cout << matrixC[i][j] << "  ";
		}
		cout << endl;
	}


	system("pause");
	return 0;

}
