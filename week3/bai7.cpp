#include<iostream>

using namespace std;

void dem(string s, int count[]);

int main(){
	string s;
	getline(cin, s);
	
	int count[3];
	for(int i=0;i<3;i++) count[i]=0;
	dem(s, count);
	
	cout << count[0] << " " << count[1] << " " << count[2];
	
	return 0;
}

void dem(string s, int count[]){
	for(int i=0;i<s.length();i++){
		if( ( s[i]>='a' && s[i]<='z' ) || (s[i]>='A' && s[i]<='Z')){
			count[0]++;
		}
		else{
			if( s[i]>='0' && s[i]<='9') count[1]++;
			else
			 count[2]++;
		}
	}
}
