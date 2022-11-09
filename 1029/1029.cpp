#include "bits/stdc++.h"

using namespace std;

// chamada de função Fibonacci
int fibonacci(int i);

//Contador de chamadas
int num_calls;

int main()
{

    int n, result;

    cin >> n;

    while (n--)
    {
        int x;
        num_calls = -1;

        cin >> x;
        result = fibonacci(x);
        cout << "fib(" << x << ") = " << num_calls << " calls = " << result << endl;
    }

    return 0;
}

int fibonacci(int i)
{
    if (i == 0)
    {
        num_calls++;
        return 0;
    }

    if (i == 1)
    {
        num_calls++;
        return 1;
    }

    num_calls++;

    return (fibonacci(i - 1) + fibonacci(i - 2));
}