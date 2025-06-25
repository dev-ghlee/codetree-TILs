#include <iostream>

using namespace std;

int a;
int c;
char o;
char op[4] = {'+','-','/','*'};

void calculator(int a, char oper, int c)
{
    switch(oper)
    {
        case '+':
            cout << a << " + " << c <<" = " <<  a + c;
            break;
        case '-':
            cout << a << " - " << c <<" = " << a - c;
            break;
        case '/':
            cout << a << " / " << c <<" = " << a / c;
            break;
        case '*':
            cout << a << " * " << c <<" = " << a * c;
            break;
        default:
            cout << "False";
    }
}

int main() {
    cin >> a >> o >> c;
    calculator(a,o,c);

    return 0;
}