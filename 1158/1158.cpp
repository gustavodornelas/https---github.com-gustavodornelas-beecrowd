#include <iostream>
 
using namespace std;

/*Leia um valor inteiro N que é a quantidade de casos de teste que vem a seguir. 
Cada caso de teste consiste de dois inteiros X e Y. 
Você deve apresentar a soma de Y ímpares consecutivos a partir de X inclusive o próprio X se ele for ímpar. Por exemplo:
para a entrada 4 5, a saída deve ser 45, que é equivalente à: 5 + 7 + 9 + 11 + 13
para a entrada 7 4, a saída deve ser 40, que é equivalente à: 7 + 9 + 11 + 13

Entrada
A primeira linha de entrada é um inteiro N que é a quantidade de casos de teste que vem a seguir. Cada caso de teste consiste em uma linha contendo dois inteiros X e Y.

Saída
Imprima a soma dos consecutivos números ímpares a partir do valor X.*/
 
int main() {
 
    int n, sum, j;

    cin >> n;

    for (int i=0; i<n; i++){
        
        int x, y;

        cin >> x >> y;

        sum=0;

        j=0;
        while (j<y){

            if (x%2!=0){
                sum+=x;
                x+=2;
                j++;
            }else{
                x++;
            }
        }

        cout << sum << endl;
    }
 
    return 0;
}