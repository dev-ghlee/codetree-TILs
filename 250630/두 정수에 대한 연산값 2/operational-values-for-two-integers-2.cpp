#include <iostream>

using namespace std;

int a, b;

void Change(int &a , int &b)
{
    if(a>b)
    {
        a *=2;
        b +=10;
    }
    else{
        b *=2;
        a +=10;
    }
}

int main() {
    cin >> a >> b;
    Change(a,b);
    cout << a << " " ,<<b ;

    return 0;
}