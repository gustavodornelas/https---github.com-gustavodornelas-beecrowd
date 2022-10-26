#include "bits/stdc++.h"

using namespace std;

int main () {

    int n;

    cin >> n;

    while (n--) {

        int anos = 0, pa, pb;
        double g1, g2;

        cin >> pa >> pb >> g1 >> g2;
        
        while (pa <= pb and anos <= 100) {
            int crescimento;

            crescimento = pa * (g1 / 100);
            pa += crescimento;

            crescimento = pb * (g2 / 100);
            pb += crescimento;

            anos++;
        }

        if (anos <= 100) cout << anos << " anos." << endl;
        else cout << "Mais de 1 seculo." << endl;

    }

    return 0;
}