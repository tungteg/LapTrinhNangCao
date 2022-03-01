#include<iostream>

using namespace std;

int main(){
	string n;
	cin >> n;
	
	int count =  n.length();
	
	if(n[0]=='-') cout << count-1;
	else cout << count;
	
	return 0;
}
