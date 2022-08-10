/*Escreva um algoritmo que leia um inteiro N (0 ≤ N ≤ 100), correspondente a ordem de uma matriz M de inteiros, e construa a matriz de acordo com o exemplo abaixo.

Entrada
A entrada consiste de vários inteiros, um valor por linha, correspondentes as ordens das matrizes a serem construídas. O final da entrada é marcado por um valor de ordem igual a zero (0).

Saída
Para cada inteiro da entrada imprima a matriz correspondente, de acordo com o exemplo. 
(os valores das matrizes devem ser formatados em um campo de tamanho 3 justificados à direita e separados por espaço. 
Após o último caractere de cada linha da matriz não deve haver espaços em branco. Após a impressão de cada matriz deve ser deixada uma linha em branco.*/



#include <iostream>
#include <iomanip>
#include <vector>
 
using namespace std;
 
int main() {
 
    int n;
    
    while ((cin >> n) and (n!=0)){

        vector<vector<int>> matriz;

        for (int i=0; i<n; i++){

            vector<int> temp;

            for (int j=0; j<n; j++){

                int x;

                if (i==j){
                    x=1;
                }else if(i<j){
                    x=j-i+1;
                }else if(i>j){
                    x=i-j+1;
                }

                temp.push_back(x);
            }

            matriz.push_back(temp);
        }
    
    
        for (int i=0; i<matriz.size(); i++){
    
            for (int j=0; j<n; j++){
                if (j==0){
                    cout << setw(3) << right << matriz[i][j];
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