//Problem:          Recursion is Fun!
 //Problem Link:    https://www.codechef.com/CAD32018/problems/RECSTR/

#include<bits/stdc++.h>

using namespace std;

string fun(string arr[], int n)
{
    if(arr[n] == "")
    {
        if(n == 0)
        {
            arr[n] = "a";
        }
        else if (n==1)
        {
            arr[n] = "b";
        }
        else if (n==2)
        {
            arr[n] = "c";
        }
        else
        {
            arr[n] = fun(arr, n-1) + fun(arr, n-2) + fun(arr, n-3);
        }
    }
    return arr[n];
}

int main()
{
    int n, k;
    cin >> n >> k;
    string arr[n+1];

    for(int i=0; i<n+1; i++)    arr[i] = "";

    string out = fun(arr, n);

    cout << out[k-1];

    return 0;
}