#include <iostream>
#include <stdlib.h>
using namespace std;

// Criar um Jogo da Velha

int main(){
	// Variaveis
	char palavra[30], letra[1], secreta[30];
	int tam, i, chances, acertos;
	bool acerto;
	
	chances = 6;
	tam=0;
	i=0;
	acerto=false;
	acertos=0;
	
	cout << "Tampe os olhos do teu amigo e digite a palavra secreta > ";
	cin >> palavra;
	system ("cls");
	
	//Serve para saber o tamanho de palavra
	while(palavra[i] != '\0'){
		i++;
		tam++;
	}
	
	//Serve para preencher o vetor secrea com '-'
	for(i=0; i<30; i++){
		secreta[i] = '-';
	}
	
	//Loop do jogo
	while((chances > 0) && (acertos < tam)){
		cout << "Chances Restantes: " << chances << "\n\n";
		cout << "Palavra Secreta: ";
		for(i=0; i < tam; i++){
			cout << secreta[i];
		}
		
		cout << "\n Digite uma letra ou se ja souber a palavra e so digitar: ";
		cin >> letra[0];
		
		//Verificar cada letra digitada para ver se paavra igual ao vetor secreta
		for(i=0; i < tam; i++){
			if(palavra[i] == letra[0]){
				acerto = true;
				secreta[i] = palavra[i];
				acertos++;
			}
		}
	 	if(!acerto){
		    chances--;
		}
		acerto=false;
		system("cls");
	}
	
	if(acertos==tam){
		cout << "Voce venceu!";
	}else{
		cout << "Que pena vc se fudeu pq perdeu";
	}
	
	return 0;
}