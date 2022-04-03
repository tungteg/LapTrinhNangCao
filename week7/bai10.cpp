#include<iostream>
#include<cstring>
using namespace std;

void rFilter(char* s){
	int n = strlen(s);
	for(int i=0;i<n;i++){
		if( (s[i]>='a'&&s[i]<='z') || (s[i]>='A' && s[i] <='Z') ){
			continue;
		}
		else
			s[i] = '_';
	}
}

int main(){
	char *s;
	s = new char[50];
	cin >> s;
	rFilter(s);
	cout << s;
}
