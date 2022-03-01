#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if( a+b>c && a+c>b && b+c>a ){
        float p = float(a+b+c)/2;
        float dienTichTamGiac = sqrt(p*(p-a)*(p-b)*(p-c));
       cout << fixed << setprecision(2) << dienTichTamGiac;
    }
    else cout << "invalid";
    return 0;
}
