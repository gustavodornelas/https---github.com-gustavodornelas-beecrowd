/*Escreva um algoritmo que leia um inteiro N (0 ≤ N ≤ 15), correspondente a ordem de uma matriz M de inteiros, e construa a matriz de acordo com o exemplo abaixo.

1

1 2
2 4

1  2  4
2  4  8
4  8 16

1  2  4  8
2  4  8 16
4  8 16 32
8 16 32 64

Entrada
A entrada consiste de vários inteiros, um valor por linha, correspondentes as ordens das matrizes a serem construídas. 
O final da entrada é marcado por um valor de ordem igual a zero (0).

Saída
Para cada inteiro da entrada imprima a matriz correspondente, de acordo com o exemplo. 
Os valores das matrizes devem ser formatados em um campo de tamanho T justificados à direita e separados por espaço, onde T é igual ao número de dígitos do maior número da matriz. 
Após o último caractere de cada linha da matriz não deve haver espaços em branco. 
Após a impressão de cada matriz deve ser deixada uma linha em branco.*/


#include <iostream>
#include <iomanip>
#include <vector>
 
using namespace std;
 
int main() {
 
    int n;

    while ((cin >> n) and (n!=0)){

        int x=1, d=0, y;

        vector <vector <int> > matriz;

        for (int i=0; i<n; i++){

            vector <int> temp;
            y=x;

            for (int j=0; j<n; j++){

                temp.push_back(y);
                y*=2;
            }
            matriz.push_back(temp);
            x*=2;
        }

	    d=to_string(y/2).length();

        for (int i=0; i<matriz.size(); i++){
    
            for (int j=0; j<matriz[i].size(); j++){
                if (j==0){
                    cout << setw(d) << right << matriz[i][j];
                }else{
                    cout << " " << setw(d) << right << matriz[i][j];
                }
            }

            cout << endl;
        }
        cout <<endl;
    }
 
    return 0;
}