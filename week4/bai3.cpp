#include<iostream>

using namespace std;

void printArrow(int n, bool left);

int main(){
	int n; 
	bool left;
	
	cin >> n;
	cin >> left;
	
	printArrow(n, left);
	return 0;
}

void printArrow(int n, bool left){
	
	if(left == false){
		int count = 0;
		
		for(int i=0;i<n;i++){
			for(int i=0;i<count;i++) cout << "  ";
			for(int i=0;i<n-count;i++){
				cout << "*";
			}
			cout << endl;
			count ++;
		}
		
		for(int i=0;i<n-1;i++){
			for(int i=0;i<count-2;i++) cout << "  ";
			for(int i=0;i<n-count+2;i++) cout << "*";
			count--;
			cout << endl;
 		}
	}
	else{
		int count = 0;
		for(int i=0;i<n;i++){
	
			for(int i=0;i<n-count-1;i++) cout << " ";
			for(int i=0;i<n-count;i++) cout << "*";
			
			cout << endl;
			count++;
		}
		for(int i=0;i<n-1;i++){
			for(int i=0;i<n-count+1;i++) cout << " ";
			for(int i=0;i<n-count+2;i++) cout << "*";
			
			cout << endl;
			count--;
		}
		
	}
}
