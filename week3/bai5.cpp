#include<iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	double array[1000];
	
	for(int i=0;i<n;i++){
		cin >> array[i];
	}
	int count=0;
	for(int i=0;i<n/2;i++){
		if(array[i] != array[n-1-i]){
			cout << "Asymmetric array";
			count ++;
			break;
		}
	}
	if(count == 0) cout << "Symmetric array";
	
	return 0;
}
