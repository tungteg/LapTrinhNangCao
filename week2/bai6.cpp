#include<iostream>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	for(int i=n;i>=1;i--){
		for(int j=-n;j<=n;j++){
			if(j>=(-n+i) && j<=(n-i)) cout << "* ";
			else cout << ". ";
		}
		cout << endl;
	}
	
	for(int i=-n;i<=n;i++) cout << "* ";
	cout << endl;
	 	
	for(int i=1;i<=n;i++){
		for(int j=-n;j<=n;j++){
			if( j>=(-n+i) && j<=(n-i) ) cout << "* ";
			else cout << ". ";
		}
		cout << endl;
	}
	
}
