#include <iostream>

using namespace std;


bool IsValid(int y)
{
    if(y % 4 ==0)
    {
        if(y % 100 == 0 && y % 400 != 0)
            return false;
        return true;
    }
        
    return false;
}


int y;

int main() {
    cin >> y;
    cout << (IsValid(y) ? "true" : "false") ;


    return 0;
}