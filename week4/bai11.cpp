#include<iostream>
#include<cstring>
using namespace std;

string pigLatin( string word){
	if(word[0]=='o' || word[0]=='a' || word[0]=='i'|| word[0]=='u' || word[0]=='e'){
		return word+"way";
	}
	else 
		return word.substr(1,word.length()-1)+ word[0]+"ay";
}

int main(){
	string word;
	cin >> word;
	
	cout << pigLatin(word);
	return 0;
}
