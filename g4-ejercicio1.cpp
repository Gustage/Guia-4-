#include <iostream>
using namespace std;
int main (){
int a, b, c;

cout<<"Digite el numero vas a dividir"<<endl;
cin>>a;
cout<<"Digite el siguiente numero";
cin>>b;
c=a%b;
if(c==0){
    cout<<"Si es divisible"<<endl;
    }
    else{cout<<"No es divisible";
    }
    return 0;
}