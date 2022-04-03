#include<iostream>

using namespace std;

void nhapmang(int* arr,int n){
	for(int i=0;i<n;i++ ){
		cin >> arr[i];
	}
}

void print(int* arr,int n){
	for(int i=0;i<n;i++ ){
		cout << arr[i] << " ";
	}
	cout << endl;
}

int* merge(int* firstArr, int lenArr1, int* secondArr, int lenArr2 ){
	
	int lenArr = lenArr1 + lenArr2;
	int* mergeArr = new int[lenArr];
	
	int firstIdx = 0, secondIdx = 0, idx = 0;
	while(firstIdx < lenArr1 && secondIdx < lenArr2){
	
		if(firstArr[0]<firstArr[1]){
			if(firstArr[firstIdx] < secondArr[secondIdx]){
				
				mergeArr[idx] = firstArr[firstIdx];
				firstIdx++;
			}
			else{
				mergeArr[idx] = secondArr[secondIdx];
				secondIdx++;
			}
			
			idx++;
		}
		
		if(firstArr[0]>firstArr[1]){
			if(firstArr[firstIdx] <= secondArr[secondIdx]){
				
				mergeArr[idx] = secondArr[secondIdx];
				secondIdx++;
			}
			else{
				mergeArr[idx] = firstArr[firstIdx];
				firstIdx++;
			}
			
			idx++;
		}
	}
	
	while(firstIdx < lenArr1){
		mergeArr[idx] = firstArr[firstIdx];
		idx++;
		firstIdx++;
	}
	
	while(secondIdx < lenArr2){
		mergeArr[idx] = secondArr[secondIdx];
		idx++;
		secondIdx++;
	}
	
	return mergeArr;
}

int main(){
	int lenArr1, lenArr2;
	
	int* firstArr = new int[lenArr1];
	int* secondArr = new int[lenArr2];
	
	cin >> lenArr1;
	nhapmang(firstArr, lenArr1);
	
	cin >> lenArr2;
	nhapmang(secondArr, lenArr2);
	
	int* arr = new int[lenArr1+lenArr2];
	
	arr = merge(firstArr, lenArr1, secondArr, lenArr2);
	
	print(arr, lenArr1+lenArr2);
	
	return 0;
}
