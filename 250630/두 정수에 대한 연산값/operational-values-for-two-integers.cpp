#include <iostream>

using namespace std;

int a, b;

void Compare(int &a ,int &b)
{
    if (a > b)
    {
        a += 25;
        b *= 2;
    }
    else
    {
        b += 25;
        a *= 2;
    }

}

int main() {
    cin >> a >> b;
    Compare(a, b);
    cout << a << " " << b;
    // Please write your code here.

    return 0;
}