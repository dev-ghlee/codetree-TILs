#include <iostream>
using namespace std;

int main() {
    string ss[5] = {"apple","banana", "grape", "blueberry", "orange"};
    char c ;
    int cnt = 0;
    cin >> c;

    for(int i = 0; i<5; i++)
    {
        if(ss[i][2] == c || ss[i][3] == c)
        {
            cout << ss[i] <<"\n";
            cnt++;
        }
    }
    cout << cnt;



    return 0;
}