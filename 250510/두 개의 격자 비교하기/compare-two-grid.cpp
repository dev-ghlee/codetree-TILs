#include <iostream>
using namespace std;
int n,m;

int main() {
    cin >> n >> m;
    int arr1[n][m];
    int arr2[n][m];
    int new_arr[n][m];
    fill(&new_arr[0][0], &new_arr[0][0] + n*m, 0);    

    for(int i =0; i<n; i++)
    {
        for(int j =0; j<m; j++)
        {
            cin >> arr1[i][j];
        }
    }
    for(int i =0; i<n; i++)
    {
        for(int j =0; j<m; j++)
        {
            cin >> arr2[i][j];
        }
    }
    for(int i =0; i<n; i++)
    {
        for(int j =0; j<m; j++)
        {
            if(arr1[i][j] != arr2[i][j])
            {
                new_arr[i][j] = 1;
                cout << new_arr[i][j] << " ";
            }
            else
                cout << new_arr[i][j] << " ";
            
        }
        cout << "\n";
    }
    return 0;
}