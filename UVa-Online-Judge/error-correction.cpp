//Problem:		Error Correction
//Problen Link:		https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=482


#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;

    while(n > 0)
    {
        int err_row, err_col;
        vector<int> arr(n);
        vector<int> row(n, 0), col(n, 0);
        int count = 0;

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)  
            {
                cin >> arr[j];
                row[i] += arr[j];
                col[j] += arr[j];
            }
        }

        for(int i=0; i<n && count <= 1; i++)
        {
            for(int j=0; j<n && count <= 1; j++)
            {
                if(row[i] % 2 == 1 && col[j]%2 == 1)
                {
                    --row[i];
                    --col[j];
                    err_row = i+1;
                    err_col = j+1;
                    count++;
                }
            }
        }

        for(int i=0; i<n; i++)  if(row[i]%2 == 1 || col[i] % 2 == 1) count++; 

        if(count == 0) cout << "OK" << endl;
        else if(count == 1) cout << "Change bit (" << err_row << "," << err_col <<  ")" << endl;
        else cout << "Corrupt" << endl;
        
        cin >> n;
    }

    return 0;
}
