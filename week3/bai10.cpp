#include<iostream>

using namespace std;

bool kiemtra(string s){
	
	if(s[0]>='0' && s[0]<='9') return false;
	else{
		
		int chu=0;
		int so=0;
		int dacbiet=0;
		
		for(int i=0;i<s.length();i++){
			
			if(s[i]>='0' && s[i]<='9') 
				so ++;
			else{
				if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')) chu++;
				else dacbiet++;
				}
		}
		if(dacbiet != 0) return false;
		else{
			if(s.length()>=6 && s.length()<= 15) return true;
			else return false;
		}
	}
	
}

int main(){
	string ten;
	cin >> ten;
	
	if(kiemtra(ten)) cout<< "Valid username";
	else cout << "Invalid username";
	return 0;
}
