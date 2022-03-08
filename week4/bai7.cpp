#include<iostream>

using namespace std;

void readArray(int a[], int n){
	for(int i=0;i<n;i++) cin >> a[i];
}

void printArray(int a[], int n){
	for(int i=0;i<n;i++) cout << a[i] << " ";
}

int main(){
	int n;
	cin >> n;
	int arr[1000];
	readArray(arr, n);
	printArray(arr, n);
	return 0;
}
