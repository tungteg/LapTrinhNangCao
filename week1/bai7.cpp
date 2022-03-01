#include<iostream>

using namespace std;

int main(){
    int n;
    do{
        cin >> n ;
        
    }while(n<-1000||n>1000);
    if(n%2==0){
        cout << "true";
    }
    else cout << "false";
    
    return 0;
}
