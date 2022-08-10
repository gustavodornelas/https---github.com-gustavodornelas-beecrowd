#include <iostream>
 
using namespace std;
 
int main() {

    cout.precision(2);
    cout.setf(ios::fixed);
 
    int i;
    float s=0;

    for(i=1; i<=100; i++){

        s += (float)1/(float)i;

    }
    
    cout << s << endl;
 
    return 0;
}