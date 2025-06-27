#include <iostream>

using namespace std;

int a, b;

int Sum(int n)
{
    int sum = 0;

    while(n)
    {
        sum += n % 10;
        n /= 10;
    }

    return sum ;
}

bool IsPrime(int n)
{
    for(int i = 2 ; i*i <=n; i++)
    {
        if(n % i == 0)
        {
            return false;
        }
            
    }
    return true;
}

int Solution(int a, int b)
{
    int cnt = 0;
    for(int i = a; i <=b; i++)
    {
        if(IsPrime(i) && Sum(i) % 2 == 0)
            cnt++;
    }
    return cnt;
}

int main() {
    cin >> a >> b;
    cout << Solution(a, b);

    return 0;
}