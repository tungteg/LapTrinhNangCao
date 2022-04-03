#include<iostream>
#include<cstring>
using namespace std;

void reverse(char* s){
	int n = strlen(s);
	for(int i=0;i<(n/2);i++){
		char temp = s[i];
		s[i] = s[n-1-i];
		s[n-1-i] = temp;
	}
}

int main(){
	
	char *s;
	s = new char[50];
	cin >> s;
	reverse(s);
	cout << s;
	
}
