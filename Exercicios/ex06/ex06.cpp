#include <iostream>
using namespace std;

/* +- Construa um algoritmo que calcule o peso ideal de uma pessoa. Dados de entrada: altura e sexo. Fórmulas para cálculo do peso: 
    # peso ideal de homem = (72,7 x altura) - 58
    # peso ideal da mulher = (62,1 x altura) - 44,7
*/
int main(){
    float h, pesoIdealH, pesoIdealM;       
    char s;

    cout << "\n=+------  Programa Iniciado   -------+=\n";
    cout << "$ Qual o seu sexo <M/F>? ";
    cin >> s;

    cout << "$ Qual a sua altura [ex: 1.60]? ";
    cin >> h;

    if(s == 'M' or s == 'm'){
        pesoIdealH = (72.7 * h) - 58;
        cout << "\n+- Para voce o peso ideal e de Kg" << pesoIdealH;
    }else if(s == 'F' or s == 'f'){
        pesoIdealM = (62.1 * h) - 44.7;
        cout << "\n+- O seu peso ideal e de Kg" << pesoIdealM;
    }
    cout << "\n=+------  __________________   -------+=";

    return 0;
}