#include <iostream>

using namespace std;

int n1, n2;
int a[100], b[100];
int cnt = 0;

bool IsContiguous()
{
     for(int i = 0; i<=n1 - n2; i++)
    {
        bool IsMatch = true;
            for(int j = 0; j < n2; j++)
            {
                if(a[i+j] != b[j])
                {
                    IsMatch = false;
                    break;
                }
            }
        if(IsMatch) return true;    
    }

    return false;
}



int main() {
    cin >> n1 >> n2;

    for (int i = 0; i < n1; i++) cin >> a[i];

    for (int i = 0; i < n2; i++) cin >> b[i];

    cout << (IsContiguous() ? "Yes" : "No");


    return 0;
}