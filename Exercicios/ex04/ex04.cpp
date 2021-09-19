//Faça um algoritmo que leia um número inteiro diferente de zero e diga se este é positivo ou negativo.
//O Algoritmo também precisa dizer se o número é igual a zero (use ifs encadeados) 

#include <iostream>
using namespace std;

int main(){
    int num;

    cout << "Digite um numero inteiro:>  ";
    cin >> num;

    if(num == 0){
        cout << " O numero deve ser diferente de zero";
    }else{
        if(num > 0){
            cout << "O numero " << num << " e positivo";
        }else{
            cout << "O numero " << num << " e negativo";
        }
    }


    return 0;
}