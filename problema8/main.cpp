#include <iostream>

using namespace std;

int main()
{
    string cadena, cadenaStr="", cadenaNum="";
    cin>>cadena;
    int cadenaLen = cadena.length();

    for(int index=0;index<cadenaLen;index++){
        if(int(cadena[index])>=48 && int(cadena[index])<=57){
            cadenaNum+=cadena[index];
        }
        else cadenaStr+=cadena[index];
    }

    cout<<"Texto: "<<cadenaStr<<endl<<"Numeros: "<<cadenaNum<<endl;

    return 0;
}
