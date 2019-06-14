//Prnblem:              Snack Up
//Problem Link:         https://www.codechef.com/problems/SNACKUP

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T, n;

    cin >> T;

    for(int i=0; i<T; i++)
    {
        cin >> n;
        cout << n << endl;
        for(int j=0; j<n; j++)
        {
            cout << n << endl;
            for(int k=0; k<n; k++)
            {
                cout << k+1 << " " << (j+k)%n+1 << " " << (k+j+1)%n+1 << endl;
            }
        }
    }

    return 0;
}