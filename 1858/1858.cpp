/*Ramsay: "(...) você vence se conseguir adivinhar quem eu sou e por que estou torturando você."

Theon deve pensar rápido e adivinhar quem é seu algoz! Entretanto, Ramsay já decidiu o que ele irá fazer depois que Theon der sua resposta.

Theon pode dizer que seu algoz é alguma dentre N pessoas. Considere que as pessoas são numeradas de 1 a N. 
Se Theon responder que seu algoz é a pessoa i, Ramsay irá atingi-lo Ti vezes.

Sua tarefa é ajudar Theon a determinar qual deve ser sua resposta de forma a minimizar o número de vezes que ele será atingido.

Entrada
A primeira linha contém um inteiro N (1 ≤ N ≤ 100). A segunda linha contém N inteiros T1, T2, ..., TN (0 ≤ Ti ≤ 20).

Saída
Imprima uma linha contendo o número da pessoa que Theon deve dizer ser seu algoz. Se existe mais de uma resposta possível, imprima a menor.*/

#include "bits/stdc++.h"

using namespace std;

int main () {

    int n, t, nAlgoz, tAlgoz;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> t;

        if (i == 1) {
            nAlgoz = i;
            tAlgoz = t;
        }
        else {
            if (t < tAlgoz) {
                nAlgoz = i;
                tAlgoz = t;

            }
        }
    }

    cout << nAlgoz << endl;

    return 0;
}
