#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    return a ? gcd(b % a, a) : b;
}

int lcm(int a , int b)
{
    return a * b / gcd(a,b);
}

int n, m;

int main() {
    cin >> n >> m;
    cout << lcm(n,m);

    return 0;
}