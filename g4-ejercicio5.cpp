#include <iostream>
#include <string.h>
using namespace std;
int main(){
    char cadena [256];
    char init, fin;
    int longitud;
    cout<<"Digite la palabra";
    cin>>cadena;
    longitud=strlen(cadena);
    init=cadena [0];
    for(int i=0;i<longitud;i++)
    {
        fin=cadena [i];
    }
    if(init==fin){

        cout<<"Si termina con la letra que comienza";
    }
    else{
        cout<<"No termina con la letra que comienza";
    }
    
    return 0;

}