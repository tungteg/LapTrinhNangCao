#include<iostream>
#include<math.h>
using namespace std;

int main(){
	
	int lower, upper;
	cin >> lower >> upper;
	
	for(int i=sqrt(lower);i<=sqrt(upper);i++) cout << i*i << " ";
	
	return 0;
	
}
