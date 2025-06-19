#include <iostream>

using namespace std;

int CheckNum(int a, int b )
{
    int cnt = 0;
    for(int i = a; i <=b; i++)
    {
        if(i % 3 == 0 || (i / 10)% 3 == 0 || (i%10) % 3 == 0)
            cnt++;
    }
    return cnt;
}

int a, b;

int main() {
    cin >> a >> b;
    cout << CheckNum(a,b);

    return 0;
}