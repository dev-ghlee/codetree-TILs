#include <iostream>

using namespace std;

int a, b;

bool IsValid(int n)
{
    return n % 2 != 0 && n % 10 != 5 && (n % 3 != 0 || n % 9 == 0) ;
}

int Count(int a, int b)
{
    int cnt = 0;
    for(int i = a ; i <=b; i ++)
    {
        if(IsValid(i))
            cnt++;
    }
    return cnt;
}


int main() {
    cin >> a >> b;

    cout << Count(a,b); 

    return 0;
}