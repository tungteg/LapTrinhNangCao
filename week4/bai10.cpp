#include<iostream>
#include<cstring>
using namespace std;

string toLower(string s){
	for(int i=0;i<s.length();i++){
		s[i] = tolower(s[i]);
	}
	return s;
}

int main(){
	string s;
	getline(cin, s);
	cout <<  toLower(s);

}
