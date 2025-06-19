#include <iostream>

using namespace std;

int a, b, c;

int sol(int a, int b, int c)
{
    int arr[3] = {a,b,c};
    int m = a;
    for(int i : arr)
    {
        m = min(m,i);       
    }

    return m;
}


int main() {
    cin >> a >> b >> c;
    
    cout << sol(a,b,c);

    return 0;
}