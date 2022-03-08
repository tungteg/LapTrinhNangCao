#include<iostream>
#include<iomanip>
using namespace std;

double calculate(double num1, char operat , double num2){
 	switch(operat){
 		case '-':{
 			return num1-num2;
			break;
		 }
		case '+':{
			return num1+num2;
			break;
		}
		case '*':{
			return num1*num2;
			break;
		}
		default:{
			return num1/num2;
		}
 		
	 }
}

int main(){
	double num1, num2;
	char operat;
	
	cin >> num1 >> operat >> num2;
	
	 cout << setprecision(2) << fixed << calculate(num1, operat, num2);
	 
	 return 0;
}
