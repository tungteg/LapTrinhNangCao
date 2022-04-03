#include<iostream>

using namespace std;

int** inputMatrix(int nRow, int nCol){
	int** matrix = new int*[nRow];
	for(int i=0;i<nRow;i++){
		matrix[i] = new int[nCol];
		for(int j=0;j<nCol;j++){
			cin >> matrix[i][j];
		}
	}
	return matrix;
}

void printMatrix(int** matrix, int nRow, int nCol){
	for(int i=0;i<nRow;i++){
		for(int j=0;j<nCol;j++){
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

int main(){
	int nRow, nCol;
	cin >> nRow >> nCol;
	
	int** arr = inputMatrix( nRow, nCol);
	printMatrix(arr, nRow, nCol);
	
	return 0;
}
