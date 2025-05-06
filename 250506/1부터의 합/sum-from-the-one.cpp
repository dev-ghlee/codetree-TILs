#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, num = 0;
    cin >> n;
    for(int i =1; i<=100; i++)
    {
        sum += i;
        if(sum >=n)
        {
            num = i;
            break;
        }
    }
    cout << num;
    return 0;
}