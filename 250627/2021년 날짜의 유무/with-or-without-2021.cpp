#include <iostream>

using namespace std;

int M, D;
int maxD[12] = {31,28,31,30,31,30,31,31,30,31,30,31} ;
bool IsValid(int M, int D)
{
    if(M <=12)
        if(D <=maxD[M-1])
            return true;

    return false;
}



int main() {
    cin >> M >> D;
    cout << (IsValid(M,D)? "Yes" : "No");

    return 0;
}