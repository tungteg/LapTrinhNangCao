#include<iostream>
#include<iomanip>
using namespace std;


int main(){
	double n;
	cin >> n;
	
	double	 sum=1, oldSum=0;
	double xi = 1, giaithua = 1; 
	
	
	double i=1;
	
	do{
		oldSum = sum;
		 xi *= n;
		 giaithua *= i;
		sum += xi/giaithua;
		i++;
	}while(sum-oldSum>0.001);
	
	cout << setprecision(4) << fixed << sum;
	
	return 0;
	
}
