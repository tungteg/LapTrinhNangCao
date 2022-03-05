#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	double arr[1000];
	
	for(int i=0;i<n;i++) cin >> arr[i];
	
	sort(arr, arr+n);
	
	double x;
	cin >> x;
	
	int k=0;
	
	for(int i=0;i<n;i++){
		if(arr[i]>x) break;
		k++;
	}
	for(int i=n;i>k-1;i--){
		arr[i] = arr[i-1];
	}
	arr[k] = x;
	
	for(int i=0;i<=n;i++) cout << arr[i] << " ";
	
	return 0;
}
