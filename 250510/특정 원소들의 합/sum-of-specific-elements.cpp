#include <iostream>
using namespace std;

int arr[4][4];
int n,sum = 0;

int main() {

    for(int i = 0; i<4; i++)
    {
        for(int j =0 ; j<4; j++)
        {
            cin >> n;
            if(j<=i)
                sum += n;
        }
    }  
    cout << sum;
    return 0;
}