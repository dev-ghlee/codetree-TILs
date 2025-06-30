#include <iostream>
#include <string>

using namespace std;

string A;

bool Check(string &s)
{
    for(int i = 0 ; i<s.length(); i++)
    {
        if(s[i] != s[j])
            return true;

    }
    return false;
}


int main() {
    cin >> A;
    cout << (Check(A)? "Yes" : "No") ;
    

    return 0;
}