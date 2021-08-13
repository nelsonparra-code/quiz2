#include <iostream>

using namespace std;

int main()
{
    int num, sum=0;
    cout<<"Ingrese n: ";
    cin>>num;

    string cadenaNum, temp="", printSum;
    cout<<"Ingrese cadena numerica: ";
    cin>>cadenaNum;



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
        if(index==cadenaLen-1) printSum += temp + " = ";
        else printSum += temp + " + ";
        temp ="";

    }

    cout<<printSum<<sum<<endl;

    return 0;
}
