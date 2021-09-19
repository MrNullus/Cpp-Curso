// *Fazer uma tabuada com while*

#include <iostream>
using namespace std;

int main(){
    int v = 0, cont = 0, res;

    cout << "$ Quer saber a Tabuada de qual valor\? ";
    cin >> v;

    while(cont <= 10){
        res = v * cont;
        cout << "\n " << v << " X " << cont << " = " << res;
        cont++;
    }

    return 0;
}