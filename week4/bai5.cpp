#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int number){
	int count=0;
	for(int i=1;i<=sqrt(number);i++){
		if(number%i==0) count++;
	}
	if(count == 1) return true;
	else return false;
}

int main(){
	int number;
	cin >> number;
	
	if(isPrime(number)){
		cout << "Prime.";
	}
	else cout << "Not a prime.";
	
	return 0;
}
