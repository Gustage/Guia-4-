#include <iostream>
using namespace std;
int main(){
    string palabra;
    int a, b;
    cout<<"Digite la palabra";
    cin>>palabra;
    a=palabra.length();
    cout<<"Tamaño de la palabra"<<a<<endl;
    b=a%2;
    if (b==0){
        cout<<"Es par";
    }
    else{
        cout<<"Es impar";
    }
    return 0;
    }
