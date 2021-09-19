
// # Elabore um algoritmo que calcule o que deve ser pago por um produto
//- considerando o preço normal de etiqueta e a escolha da condição de pagamento. 
//  -> Código Condição de pagamento: 
//	    # 1 À vista em dinheiro ou cheque, recebe 10% de desconto  
//	    # 2 À vista no cartão de crédito, recebe 15% de desconto  
//	    # 3 Em duas vezes, preço normal de etiqueta sem juros 
//      # 4 Em duas vezes, preço normal de etiqueta mais juros de 10% 

#include <iostream>
using namespace std;

int main(){
    string produto; 
    float precoEtiqueta, precoFinal; 
    int opt;

    cout << "$ Qual o nome do produto? ";
    cin >> produto;

    cout << "$ Digite o preco da etiqueta do produto >> ";
    cin >> precoEtiqueta;


    cout << "- Confira a baixo as formas de pagamento" << "\n";
    cout << " # 1 A vista em dinheiro ou cheque, recebe 10%, de desconto \n # 2 A vista no cartao de credito, recebe 15%, de desconto \n # 3 Em duas vezes, preco normal de etiqueta sem juros  \n # 4 Em duas vezes, preco normal de etiqueta mais juros de 10% " << "\n";
    cout << "$ Digite a forma >> ";
    cin >> opt;

    cout << "\n+-------------  --------  -------     INFO   --------------  ----------  --------+";
    if(opt == 1){
        precoFinal = precoEtiqueta - (precoEtiqueta * 0.10);
        cout << "\n# Forma de pagamento : A vista em dinheiro ou cheque recebe 10%, de desconto";
        cout << "\n# Preco Final : " << "RS " << precoFinal;
        cout << "\n# Preco da Etiqueta : " << "RS " << precoEtiqueta;
    } else if(opt == 2){
        precoFinal = precoEtiqueta - (precoEtiqueta * 0.15);
        cout << "\n# Forma de Pagamento : A vista no cartao de credito recebe 15%, de";
        cout << "\n# Preco Final : " << "RS " << precoFinal;
        cout << "\n# Preco da Etiqueta : " << "RS " << precoEtiqueta;
    } else if(opt == 3){
        precoFinal = precoEtiqueta/2;
        cout << "\n# Forma de Pagamento : Em duas vezes, preco normal de etiqueta sem juros ";
        cout << "\n# Preco Final : " << "2x de RS " << precoFinal << " sem juros";
        cout << "\n# Preco da Etiqueta : " << "RS " << precoEtiqueta;
    } else if(opt == 4){
        precoFinal = precoEtiqueta + (precoEtiqueta * 0.10);
        cout << "\n# Forma de Pgamento : Em duas vezes, preco normal de etiqueta mais juros de 10% ";
        cout << "\n# Preco Final : " << "2x de RS " << precoFinal << " juros de 10%";
        cout << "\n# Preco da Etiqueta : " << "RS " << precoEtiqueta;
    } else{
        cout << "\n-- OPCAO INCORRETA!";
    }
    cout << "\n+-------------  --------  -------  ==========  ----------  ----------  -----------+";

    return 0;
}