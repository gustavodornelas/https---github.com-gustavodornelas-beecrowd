#include <iostream>
 
using namespace std;
 
int main() {

    cout.precision(2);
    cout.setf(ios::fixed);
 
    int i, b=1;
    float s=0;

    for(i=1; i<=39; i+=2){

        s += (float)i/(float)b;

        b*=2;

    }
    
    cout << s << endl;
 
    return 0;
}