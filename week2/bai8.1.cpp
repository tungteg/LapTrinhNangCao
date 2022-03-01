#include<iostream>

using namespace std;

long long countNumber(long long n){
	int k=0;
	while(n!=0){
		n/=10;
		k++;
	}
	return k;
}

int main(){
	long long int n;
	cin >> n;
	cout << countNumber(n);
}
