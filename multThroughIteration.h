#define N 2
void iterationMult(int matrixA[][N], int matrixB[][N], int matrixC[][N]){
	for (int k = 0; k < N; k++)
	{
		for (int l = 0; l < N; l++)
		{
			for (int m = 0; m<N; m++)
			{
				matrixC[k][l] += matrixA[k][m] * matrixB[m][l]; // storing the each element to its respective position in matrix C after multiplication

			}

		}

	}


}