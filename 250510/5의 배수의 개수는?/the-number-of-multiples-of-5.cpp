#include <iostream>
using namespace std;

int main() {
    int n,cnt =0;
    for(int i = 0; i<4 ; i++)
    {
        for(int j = 0; j<4; j++)
        {
            cin >> n;
            if(n%5 == 0)
                cnt++;
        }
    }    
    cout << cnt;
    return 0;
}