#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i<=n; i++)
    {
        if(i %2 == 0)
        {
            for(int j =n ; j>0; j--)
            {
                cout << j ;               
            }
        }
        else
        {
            for(int j =1 ; j<=n; j++)
            {
                cout << j ;               
            }
        }
        cout << "\n";
    }
    return 0;
}