#include<iostream>

using namespace std;

long long int factorial(int n){
	long long int result = 1;
	for(int i=1;i<=n;i++) result *= i;
	
	return result;
}

int main(){
	int n;
	cin >> n;
	
	 cout << factorial(n);
	 
	 return 0;
}
