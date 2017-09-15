#define N 2
void starssanMult(int matrixA[][N], int matrixB[][N], int matrixC[][N], int mult1, int mult2, int mult3, int mult4, int mult5, int mult6, int mult7) {

	mult1 = (matrixA[0][0] + matrixA[1][1]) * (matrixB[0][0] + matrixB[1][1]);
	mult2 = (matrixA[1][0] + matrixA[1][1]) * matrixB[0][0];
	mult3 = matrixA[0][0] * (matrixB[0][1] - matrixB[1][1]);
	mult4 = matrixA[1][1] * (matrixB[1][0] - matrixB[0][0]);
	mult5 = (matrixA[0][0] + matrixA[0][1]) * matrixB[1][1];
	mult6 = (matrixA[1][0] - matrixA[0][0]) * (matrixB[0][0] + matrixB[0][1]);
	mult7 = (matrixA[0][1] - matrixA[1][1]) * (matrixB[1][0] + matrixB[1][1]);

	matrixC[0][0] = mult1 + mult4 - mult5 + mult7;
	matrixC[0][1] = mult3 + mult5;
	matrixC[1][0] = mult2 + mult4;
	matrixC[1][1] = mult1 - mult2 + mult3 + mult6;

}