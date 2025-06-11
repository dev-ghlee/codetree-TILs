#include <iostream>

using namespace std;

int n, m;
             
int gcd(int a, int b)  
{
    return a ? gcd(b%a,a) : b; 
}




int main() {
    cin >> n >> m;
    cout << gcd(n,m);    

    return 0;
}