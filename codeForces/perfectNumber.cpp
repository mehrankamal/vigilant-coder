// Problem:         Perfect Number
// Problem Link:    https://codeforces.com/contest/919/problem/B

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, a1 = 19;
    cin >> n;

    if(n==1)
    {
        cout << "19" << endl;
        return 0;
    }

    int j = 1;
    int num = a1+1;
    
    while(1)
    {
        int temp = num;
        int sum = 0;
        while(temp!=0)
        {
            int rem = temp%10;
            sum += rem;
            temp /= 10;
        }
        if(sum == 10)
        {
            if(j==n-1)
            {
                cout << num << endl;
                return 0;
            }
            j++;
        }
        num++;
    }

    return 0;
}