#include <iostream>

using namespace std;

int a, b;

int Multiply(int a,int b)
{
    int base = a; 
    for(int i  = 1; i<b; i++)
    {
        a *= base;    
    }
    return a;
}


int main() {
    cin >> a >> b;
    cout << Multiply(a,b);
    return 0;
}