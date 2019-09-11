//Problem:          Nearest Interesting Number
//Problem Link:     https://codeforces.com/gym/252533/problem/F

#include<bits/stdc++.h>

using namespace std;

bool test(int a)
{
    int sum = 0;
    while(a != 0)
    {
        sum += (a % 10);
        a = a / 10;
    }

    return ((sum % 4 == 0)?true:false);
}

int main()
{
    int a;
    cin >> a;

    while(!test(a))
    {
        a++;
    }

    cout << a << endl;

    return 0;
}