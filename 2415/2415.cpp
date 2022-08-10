#include <iostream>
using namespace std;

int main (){

    int n, i, valor, temp=0, pontos=0, pontos_temp;

    cin >> n;

    for (i=0; i<n; i++){

        if (i>0){
            temp=valor;
        }

        cin >> valor;

        if (i==0){
            pontos_temp=1;
        }

        if (valor==temp){
            pontos_temp++;
        }else{
            pontos_temp=1;
        }

        if (pontos_temp>pontos){
            pontos=pontos_temp;
        }
    }

    cout << pontos << endl;
    return 0;
}
