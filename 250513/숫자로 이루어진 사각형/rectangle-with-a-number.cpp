#include <iostream>

using namespace std;

int N;
int cnt = 1;

void print(int n)
{
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            if(cnt == 10)
                cnt = 1;
            cout << cnt << " ";
            cnt++;

        }
        cout << "\n";
    }
}

int main() {
    cin >> N;
    print(N);

    return 0;
}