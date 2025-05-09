#include <iostream>
using namespace std;

int n;
int cnt  = 0;
int main() {
    cin >>n;
    for(int i = 0; i<n; i++) 
    {
        for(int j = 0; j<=i; j++)
        {
            cnt++;
            cout << cnt << " ";
            
        }
        cout << "\n";
    }
    return 0;
}