#include <iostream>
using namespace std;

/*  +-= Uma empresa concederá um aumento de salário aos seus funcionários, variável de acordo com o cargo, conforme a tabela abaixo. 
    +-= Faça um algoritmo que leia o salário e o cargo de um funcionário e calcule o novo salário. Se o cargo do funcionário não estiver na tabela, ele deverá, então, receber 40% de aumento. Mostre o salário antigo, o novo salário e a diferença. Código Cargo Percentual:>
	    -= Se nn tem 40%
	    -= 101 Gerente 10% 
	    -= 102 Engenheiro 20% 
	    -= 103 Técnico 30%
*/

int main(){
    float Sal, novoSal;
    string cargo;

    cout << "------------------------------\n";
    cout << "# Qual o seu cargo? ";
    cin >> cargo;

    cout << "------------------------------";

    cout << "\n# Qual o seu salario? ";
    cin >> Sal;

    if(cargo == "Gerente" || cargo == "gerente"){
        novoSal = Sal + (Sal * 0.10);
        cout << "\n-= Codigo : 101";
        cout << "\n-= Novo Salario : RS " << novoSal;
        cout << "\n-= Salario Antigo : RS " << Sal;
    }else if(cargo == "Engenheiro" || cargo == "engenheiro"){
        novoSal = Sal + (Sal * 0.20);
        cout << "\n-= Codigo : 102";
        cout << "\n-= Novo Salario : RS " << novoSal;
        cout << "\n-= Salario antigo : RS " << Sal;
    }else if(cargo == "Tecnico" || cargo == "tecnico"){
        novoSal = Sal + (Sal * 0.30);
        cout << "\n-= Codigo : 103";
        cout << "\n-= Novo Salario : RS " << novoSal;
        cout << "\n-= Salario Antigo : RS " << Sal;
    }else{
        novoSal = Sal + (Sal * 0.40);
        cout << "\n-= Codigo : Nenhum Codigo";
        cout << "\n-= Novo Salario : RS " << novoSal;
        cout << "\n-= Salario Antigo : RS " << Sal;
    }

    cout << "\n------------------------------";

    return 0;
}