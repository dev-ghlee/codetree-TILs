#include <iostream>
#include <string>

using namespace std;

string A;

bool IsRight(string &s)
{
    for(int i = 0 ; i< s.size()/2; i++ )
    {
        if(s[i] != s[s.size()-i-1]) return false;

    }
    return true;
}


int main() {
    cin >> A;
    cout << (IsRight(A)? "Yes" : "No") ;



    return 0;
}