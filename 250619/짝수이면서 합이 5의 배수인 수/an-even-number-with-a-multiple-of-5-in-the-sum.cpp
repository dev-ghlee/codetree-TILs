#include <iostream>

using namespace std;

bool CheckNum(int n)
{
    int sum = n/10 + n%10;
    return n % 2 == 0 && sum % 5 == 0;  
}

int n;


int main() {
    cin >> n;
    if(CheckNum(n))
        cout << "Yes";
    else
        cout << "No";

    return 0;
}