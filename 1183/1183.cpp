/*Leia um caractere maiúsculo, que indica uma operação que deve ser realizada e uma matriz M[12][12]. 
Em seguida, calcule e mostre a soma ou a média considerando somente aqueles elementos que estão acima da diagonal principal da matriz.

Entrada
A primeira linha de entrada contem um único caractere Maiúsculo O ('S' ou 'M'), 
indicando a operação (Soma ou Média) que deverá ser realizada com os elementos da matriz. Seguem os 144 valores de ponto flutuante que compõem a matriz.

Saída
Imprima o resultado solicitado (a soma ou média), com 1 casa após o ponto decimal.

*/

#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {

    cout.precision(1);
    cout.setf(ios::fixed);

    vector<vector<double>> matriz;
 
    int qtd=0;
    double res=0;
    char t;

    cin >> t;

    for (int i=0; i<12; i++){

        vector<double>temp;

        for (int j=0; j<12; j++){

            double x;

            cin >> x;

            temp.push_back(x);
        }
        matriz.push_back(temp);
    }

    for (int i=0; i<12; i++){
        for (int j=0; j<12; j++){

            if (j>i){
				res+=matriz[i][j];
				qtd++;
			}
        }
    }

    if (t=='S'){
        cout << res << endl;
    }else{
        cout << res/qtd << endl;
    }
 
    return 0;
}