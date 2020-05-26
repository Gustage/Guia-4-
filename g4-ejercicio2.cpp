#include <iostream>
using namespace std;
int main (){
    int a, b;
    cout<<"Digite el numero a verificar";
    cin>>a;
    b=a%2;
    if(b==0){
        cout<<"El numero es par";
    }
    else{
        cout<<"El numero es impar";
    }
    return 0;
}