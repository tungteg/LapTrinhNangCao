#include<iostream>
#include<iomanip>
using namespace std;

const int MAX = 1000;

void nhapMang(int n, double arr[]);
void tichVoHuong(int n, double A[], double B[]);

int main(){
	int n;
	cin >> n;
	
	double* A = new double[MAX];
	double* B = new double[MAX];
	
	nhapMang(n, A);
	nhapMang(n, B);
	
	tichVoHuong(n, A, B);
	
	return 0;
	
}

void nhapMang(int n, double arr[]){
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
}

void tichVoHuong(int n, double A[], double B[]){
	double t=0;
	for(int i=0;i<n;i++){
		t+=A[i]*B[i];
	}
	cout << setprecision(2) << fixed << t;
}
