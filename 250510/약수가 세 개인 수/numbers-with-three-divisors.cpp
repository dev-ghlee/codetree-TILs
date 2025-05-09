#include <iostream>

using namespace std;

int st, ed;
int cnt =0;
int main() {
    cin >> st >> ed;

    for(int i = st; i <= ed; i++)
    {
        int ndiv = 0;
        for(int j = 1; j<=i; j++)
        {
            if(i % j == 0)
            {
                ndiv += 1;
            }
        }
        if(ndiv == 3)
            cnt +=1;
    }
    cout << cnt;

    return 0;
}
