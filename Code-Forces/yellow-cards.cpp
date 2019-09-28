//Probelm:          Yellow Cards
//Problem Link:     https://codeforces.com/gym/254219/problem/0

#include<bits/stdc++.h>

using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a1, a2, k1, k2, n;

    cin >> a1 >> a2 >> k1 >> k2 >> n;
    int minn, maxx = 0;
    if(k1 > k2)
    {
        swap(k1, k2);
        swap(a1, a2);
    }
    int remaining = (a1 * (k1 - 1)) + (a2 * (k2 -1));
    minn = max(n-remaining, 0);
    if(n <= (a1 * k1)) maxx = floor(n/k1);
    else maxx = a1 + floor((n-a1*k1)/k2);
    cout << minn << " " << maxx << endl;

    return 0;
}