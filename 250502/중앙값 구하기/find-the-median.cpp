#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cin >> a >> b >> c;
    if (a < b)
        cout << (b < c ? b : (a < c ? c : a));
    else
        cout << (b > c? b : (a > c? c : a));

    
    return 0;
}