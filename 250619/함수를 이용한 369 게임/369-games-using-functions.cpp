#include <iostream>

using namespace std;

bool IsValid(int i)
{
    if(i%3 == 0 ) return true;

    while(i > 0)
    {
        if((i%10) != 0 &&(i%10) %3 == 0 ) return true;
        i /= 10;
    }

    return false;
}

int CheckNum(int a, int b )
{
    int cnt = 0;
    for(int i = a; i <=b; i++)
    {
        if(IsValid(i))
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