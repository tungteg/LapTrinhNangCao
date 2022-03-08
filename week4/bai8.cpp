#include<iostream>

using namespace std;

void readArray(int array[], int n){
	for(int i=0;i<n;i++) cin >> array[i];
}

bool compareArray(int array1[], int array2[], int n){
	for(int i=0;i<n;i++){
		if(array1[i] == array2[i]) continue;
		else return false;
	}
	return true;
}

int main(){
	int n;
	cin >> n;
	
	int arr1[1000], arr2[1000];
	readArray(arr1, n);
	readArray(arr2, n);
	
	cout << boolalpha << compareArray(arr1, arr2, n);
	
}
