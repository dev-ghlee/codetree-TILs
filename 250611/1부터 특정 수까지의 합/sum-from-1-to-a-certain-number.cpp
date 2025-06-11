#include <iostream>

using namespace std;

int N;
int sum = 0;


int f(int N)
{
    for(int i =1; i<=N; i++)
        sum += i;
    return sum/10 ;
}


int main() {
    cin >> N;
    cout << f(N); 

    return 0;
}