//Problem:          Helpful Maths
//Problem Link:     https://codeforces.com/problemset/problem/339/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    string inp;
    cin >> inp;
    vector<char> arr;
    for(int i=0; i<inp.length(); i+=2)  arr.push_back(inp[i]);
    sort(arr.begin(), arr.end());
    for(int i=0; i< arr.size()-1; i++)  cout << arr[i] << "+";
    cout << arr[arr.size()-1] << endl;

    return 0;
}