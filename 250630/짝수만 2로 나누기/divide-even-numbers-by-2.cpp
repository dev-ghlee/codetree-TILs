#include <iostream>

using namespace std;

int n;
int arr[50];

void ChangeArray(int *a, int n)
{
    for(int i = 0; i< n; i++)
    {
        cout << ((a[i] % 2 == 0)? a[i]/2 : a[i]) <<" ";
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    ChangeArray(arr,n);

    return 0;
}