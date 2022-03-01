#include<iostream>
#include<iomanip>

using namespace std;

const int MAX = 1000;

void nhapmang(int n, double arr[]);
double TB(int n, double arr[]);
double tinhPhuongSai(int n,double arr[]);

int main(){
	
	int n;
	cin >> n;
	
	double arr[MAX];
	
	nhapmang(n, arr );
	
	cout << setprecision(2) << fixed << tinhPhuongSai(n, arr);
	
	return 0;
}

void nhapmang(int n,double arr[]){
	for(int i=0;i<n;i++) cin >> arr[i];
}

double TB(int n, double arr[]){
	double k=0;
	for(int i=0;i<n;i++) k+= arr[i];
	return (double)k/n;
}


double tinhPhuongSai(int n,double arr[] ){
	double ps=0;
	double t = TB(n, arr);
	
	for(int i=0;i<n;i++){
	 	ps += (arr[i]- t) * (arr[i] - t);
	}
	
	return (double)ps/n;
	
}



