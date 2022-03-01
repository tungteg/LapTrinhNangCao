#include<iostream>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	int k=2*n+1;
	
	for(int i=1;i<=k;i++){
		for(int j=1;j<=k;j++){
			if( i == j || i+j == k+1) cout << "* ";
			else cout << ". ";
		}
		cout << endl;
	}
	
	return 0;
}
