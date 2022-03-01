#include<iostream>

using namespace std;

int main(){
	
	int sl, chan;
	cin >> sl >> chan;

	int ga, cho;
	
	if(chan%2==0){
		
		cho = chan/2-sl;
		ga = sl-cho;
		
		if(2*ga+4*cho==chan){
			cout << "chicken = " << ga << ", dog = " << cho;
		}
		else
			cout << "invalid";
			
	}
	else cout << "invalid";
	return 0;
}
