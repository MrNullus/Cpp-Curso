//  Escreva um algoritmo para ler as dimensões de um retângulo (base e altura), calcular e escrever a área do retângulo.

#include <iostream>
using namespace std;

int main(){
    float b, h, area;

    cout << "Digite a base do triangulo:>  ";
    cin >> b;

    cout << "Digite a altura do triangulo:>  ";
    cin >> h;

    area = b * h;

    cout << "A area do triangulo e: " << area << "\n";

    return 0;
}
