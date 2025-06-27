#include <iostream>

using namespace std;

int Y, M, D;

int maxD[13] = {0,31,30,31,30,31,30,31,31,30,31,30,31};

bool IsLeap(int Y)
{
    if(Y % 4 == 0)
    {
        if(Y % 100 == 0 && Y % 400 != 0)
            return false;
        return true;
    }
    return false;
}

void CheckMaxDChange(int Y)
{
    if(IsLeap(Y))
        maxD[2] = 29;
}

void CheckSeason(int Y, int M, int D)
{
    CheckMaxDChange(Y);
    if(D <= maxD[M] )
    {
        if(3<= M && M <=5) cout << "Spring";
        if(6<= M && M <=8) cout << "Summer";
        if(9<= M && M <=11) cout << "Fall";
        if(M == 1 || M == 2 || M == 12) cout << "Winter";
    }
    else
        cout << -1 ;
}

int main() {
    cin >> Y >> M >> D;
    CheckSeason(Y,M,D);


    return 0;
}