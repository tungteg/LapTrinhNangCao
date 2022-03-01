#include<iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	if(n<7) return 0;
	
	for(int i=7;i<=n;i+=7){
		if(i%7==0) cout << i << " ";
	}
	
	return 0;

}
