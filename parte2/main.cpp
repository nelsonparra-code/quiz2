#include <iostream>

using namespace std;

void leerCadenaCaracteres(char *ptrA);

int main()
{
    int num=3, sum=0;

    char cadena[50];
    string temp="", printSum,cadenaNum,cadenaStr;
    leerCadenaCaracteres(cadena);

    for(int index=0;index<50;index++){
        if(int(cadena[index])>=48 && int(cadena[index])<=57){
            cadenaNum+=cadena[index];
        }
        else cadenaStr+=cadena[index];
    }

    int cadenaLen = cadenaNum.length(), aux=0, diff;

    while (true) {
        aux++;
        if((num*aux)>cadenaLen){
            diff=(num*aux)-cadenaLen;
            break;
        }
    }

    for(int index=0;index<cadenaLen;index++){
        for(int separacion=1;separacion<(num+1);separacion++){
            if(index==0){
                string ceros;
                for(int i=0;i<diff;i++){
                    temp+="0";
                    separacion++;
                }
            }
            temp+=cadenaNum[index];
            if(separacion%num!=0) index++;
        }
        sum+=stoi(temp);
        temp ="";

    }

    cout<<"Original: "<<cadenaNum<<endl<<"Suma: "<<sum<<endl;

    return 0;
}

void leerCadenaCaracteres(char *ptrA){
    char caracter;
    for(int index=0;index<50;index++){
        cout<<"Si desea teminar, ingrese *"<<endl;
        cout<<"Ingrese caracter: ";
        cin>>caracter;
        if(caracter=='*') break;
        else *(ptrA+index) = caracter;
    }
};
