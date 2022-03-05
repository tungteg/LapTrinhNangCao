#include<iostream>
#include<algorithm>

const int MAX = 1000;

using namespace std;

int main(){
	int n;
	cin >> n;
	
	long long* arr = new long long[n];
	
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	
	sort(arr, arr+n);
	
	for(int i=0;i<n-1;i++){
		int count = 0;
		if(arr[i]== arr[i+1]){
			for(int j=i+1;j<n;j++){
				if(arr[i]==arr[j]) arr[j]=-1;
			}	
		}
	}
	
	for(int i=0;i<n;i++){
	 	if(arr[i] != -1) cout <<arr[i] << " ";
	} 
}
