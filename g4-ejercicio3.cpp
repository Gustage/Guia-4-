#include <iostream>
using namespace std;
int main (){
    double a;
    cout<<"Digite el numero";
    cin>>a;
    if(a>0){
        cout<<"El numero es positivo";
    }
    else if (a==0){
        cout<<"El numero es cero";
    }
    else{
        cout<<"El numero es negativo";
    }
    return 0;

    
}