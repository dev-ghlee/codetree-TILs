#include <iostream>
using namespace std;

int main() {
    int cntT = 0, cntF = 0 ;
    int n;
    for(int i = 0; i< 10; i++)
    {
        cin >> n;
        if(n % 3 == 0 )
            cntT++;
    
            
        if(n % 5 ==0)
            cntF++;
    }
    cout << cntT << " " << cntF;
    return 0;
}