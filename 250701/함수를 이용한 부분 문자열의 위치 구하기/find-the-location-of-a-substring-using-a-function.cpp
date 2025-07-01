#include <iostream>
#include <string>

using namespace std;

string text;
string pattern;

int IsContinuous()
{
    for(int i = 0; i<=text.length()-pattern.length(); i++)
    {
        bool isMatch = true;
        for(int j = 0; j<pattern.length(); j++)
        {
            if(text[i+j] != pattern[j])
            {
                isMatch = false;
                break;
            } 

        }
        if(isMatch) return i;
    }
    return -1;
}

int main() {
    cin >> text;
    cin >> pattern;

    cout << IsContinuous() ;

    

    return 0;
}