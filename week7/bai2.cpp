#include<iostream>

using namespace std;

void multiply(int* n, int k){
	*n = (*n) * k;
}

int main(){
	int* n = new int;
	int k;
	cin >> *n >> k;
	multiply(n, k);
	cout << *n;
}
