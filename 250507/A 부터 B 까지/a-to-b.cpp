#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    cout << a <<" ";
    while(true)
    {
        if(a %2 == 0 ) 
            a +=3;
        else
            a *=2;
        if(a >b)
            break;
        cout << a << " ";
    }
    return 0;
}