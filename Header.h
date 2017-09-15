#include <iostream>
using namespace std;
#define N 2
void display(int matrixA[][N], int matrixB[][N]){

	cout << "Displaying Matixes" << endl;
	cout << endl;
	cout << "MATRIX A: " << endl;
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			cout << matrixA[i][j] << "  ";;
		}
		cout << endl;
	}
	cout << endl;
	cout << endl;
	cout << "MATRIX B: " << endl;
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){

			cout << matrixB[i][j] << "  ";
		}
		cout << endl;
	}

	system("pause");
}
