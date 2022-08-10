/*Escreva um algoritmo que leia um inteiro N (0 ≤ N ≤ 100), correspondente a ordem de uma matriz M de inteiros, e construa a matriz de acordo com o exemplo abaixo.

Entrada
A entrada consiste de vários inteiros, um valor por linha, correspondentes as ordens das matrizes a serem construídas. 
O final da entrada é marcado por um valor de ordem igual a zero (0).

Saída
Para cada inteiro da entrada imprima a matriz correspondente, de acordo com o exemplo. 
Os valores das matrizes devem ser formatados em um campo de tamanho 3 justificados à direita e separados por espaço. 
Após o último caractere de cada linha da matriz não deve haver espaços em branco. Após a impressão de cada matriz deve ser deixada uma linha em branco.*/

#include <iostream>
#include <iomanip>
#include <vector>

#define MAX 100
 
using namespace std;
 
int main() {
 
    int n;

    int matriz[MAX][MAX];

    while ((cin >> n) and (n!=0)){

            int iniMatriz = 0, fimMatriz = n, elemento = 1;

        while (fimMatriz!=0){

            for (int i=iniMatriz; i<fimMatriz; i++){
                for (int j=iniMatriz; j<fimMatriz; j++){
                    matriz[i][j]=elemento;   
                }
            }

            iniMatriz++;
            fimMatriz--;
            elemento++;
        }

    

        for (int i=0; i<n; i++){
            bool begin=true;

            for (int j=0; j<n; j++){
                if (begin){
                    cout << setw(3) << right << matriz[i][j];
                    begin=false;
                }else{
                    cout << " " << setw(3) << right << matriz[i][j];
                }
            }

            cout << endl;
        }

        cout << endl;
    }
 
    return 0;
}