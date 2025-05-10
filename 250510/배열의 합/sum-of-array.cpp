#include <iostream>
using namespace std;


int main() {
    int n;

    for(int i = 0; i<4; i++)
    {
        int sum = 0;
        for(int j =0; j<4; j++)
        {
            cin >> n;
            sum += n;
        }
        cout << sum << "\n";
    }
        
    return 0;
}