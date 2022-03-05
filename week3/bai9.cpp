#include<iostream>
#include<string>
using namespace std;

int main(){
	string text;
	getline(cin, text);
	
	int countSpace=0;
	
	while(text[countSpace]==' '){
		cout << text[countSpace];
	 	countSpace++;
	}
	for(int i=countSpace; i<text.length(); i++){
		
		if(text[i] != ' '){
			cout << text[i];
		}
		else{
			cout << ' ';
			while(text[i+1]==' '){
				i++;
			}
		}
	}
}
