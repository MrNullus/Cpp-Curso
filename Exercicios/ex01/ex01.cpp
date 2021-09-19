#include <iostream>
using namespace std;

//Pedir 5 numeros pare e somar numeros pares

int main(){
	int num, cont, s = 0, par = 0;
	for(cont=0;cont<5;cont++){
		cout << "Digite um numero:>  ";
		cin >> num;
		if(num % 2 == 0){
			s += num;
			par++;
		}
	}

	cout << "O total de numeros par e "+ s + " a soma de todos os pares e " + par;

	return 0;
}
