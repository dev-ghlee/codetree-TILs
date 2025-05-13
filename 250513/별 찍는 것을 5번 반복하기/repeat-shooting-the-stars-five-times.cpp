#include <iostream>
using namespace std;

void print()
{
    for(int i = 0; i<10; i++)
        cout << "*";

}

int main() {
    for(int i = 0; i<5; i++)
    {
        print();
        cout << "\n";
    }
    return 0;
}