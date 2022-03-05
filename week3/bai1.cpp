#include<iostream>
#include<vector>
using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	vector<int> A;
	vector<int> B;
	
	int number;
	
	for(int i=0;i<n;i++){
		cin >> number;
		A.push_back(number);
	}
	
	for(int i=0;i<n;i++){
		cin >> number;
		B.push_back(number);
	}
	
	int k=0;
	for(int i=0;i<n;i++){
		if(A[i]==B[i]){
			k++;
		}
	}
	
	if(k==n) cout << "YES";
	else cout << "NO";
	
	return 0;
	
}
