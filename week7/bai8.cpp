#include<iostream>

using namespace std;

int** transpose(int** matrix, int nRow, int nCol){
	int** transposeMatrix = new int*[nCol];
	for(int i=0;i<nCol;i++){
		transposeMatrix[i] = new int[nRow];
		for(int j=0;j<nRow;j++){
			transposeMatrix[i][j] = matrix[j][i];
		}
	}
	return transposeMatrix;
}

int main(){
	int nRow, nCol;
	cin >> nRow >> nCol;
	
	int** matrix = new int*[nRow];
	for(int i=0;i<nRow;i++){
		matrix[i] = new int[nCol];
		for(int j=0;j<nCol;j++){
			cin >> matrix[i][j];
		}
	}
	
	int** matrixT = transpose(matrix, nRow, nCol);
	
	for(int i=0;i<nCol;i++){
		for(int j=0;j<nRow;j++){
			cout << matrixT[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}
