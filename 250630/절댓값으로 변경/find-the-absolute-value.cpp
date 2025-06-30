#include <iostream>

using namespace std;

int n;
int arr[50];

void MakeAbsolute(int *a, int n)
{
    for(int i = 0; i<n; i++)
    {
        if(a[i]<0) a[i] = (-1)*a[i];
    } 
}


int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    MakeAbsolute(arr,n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] <<" ";
    }
    // Please write your code here.

    return 0;
}