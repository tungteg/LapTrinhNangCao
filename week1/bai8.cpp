#include<iostream>

using namespace std;

int main(){
    int number1, number2, number3;
    do{
        cin >> number1 >> number2 >> number3;
        
    }while(number1 < -1000 || number2 < -1000 || number3 < -1000 || number1>1000 || number2 >1000 || number3>1000);
    
    if(number1==number2 && number2==number3){
        cout << "true";
    }
    else cout << "false";
    
    return 0;
}
