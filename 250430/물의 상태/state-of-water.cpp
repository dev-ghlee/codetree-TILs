#include <iostream>
using namespace std;

int main() {
    int c;
    cin >> c;
    if(c < 0)
        cout << "ice";
    else if(c >= 100)
        cout << "vapor";
    else    
        cout << "water";
    return 0;
}