#include<iostream>
#include<algorithm>
using namespace std;

void sort(float array[], int size, bool isAscending){
	
	if(isAscending == true){
		for(int i=0;i<size-1;i++){
			for(int j=i+1;j<size;j++){
				if(array[i]>array[j]) swap(array[i], array[j]);
			}
		}
	}
	
	else
		for(int i=0;i<size-1;i++){
			for(int j=i+1;j<size;j++){
				if(array[i]<array[j]) swap(array[i], array[j]);
			}
		}
	
}

int main(){
	int size;
	cin >> size;
	
	float array[10000];
	for(int i=0;i<size;i++) cin >> array[i];
	
	bool isAscending;
	cin >> isAscending;
	
	sort(array, size, isAscending);
	
	for(int i=0;i<size;i++) cout << array[i] << " ";
	return 0;
	
}
