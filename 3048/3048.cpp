#include "bits/stdc++.h"

using namespace std;

int main()
{

    int n, i, j, consecutivos = 0;
    vector<int> seq;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;

        seq.push_back(temp);
    }

    int atual = seq[0];

    while (i < n)
    {
        if (atual == 1)
        {
            for (j = i; j < n; j++)
            {
                if (seq[j] == 2)
                    break;
            }
            i = j;
            atual = 2;
        }
        else
        {
            for (j = i; j < n; j++)
            {
                if (seq[j] == 1)
                    break;
            }
            i = j;
            atual = 1;
        }
        consecutivos++;
    }

    cout << consecutivos << endl;
    
    return 0;
}