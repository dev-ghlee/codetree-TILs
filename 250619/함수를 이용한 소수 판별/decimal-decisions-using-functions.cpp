#include <iostream>

using namespace std;

int a, b;
int sum = 0;


bool IsValid(int i)
{
    for(int j = 2; j<=i; j++)
    {
        if(i % j == 0 && j != i)
            return false;
    }
    return true;
}

int CheckPrime(int a, int b)
{
    for(int i = a; i<=b; i++)
    {
        if(IsValid(i))
            sum += i;
    }
    return sum;

}

int main() {
    cin >> a >> b;
    cout << CheckPrime(a,b);
    

    return 0;
}