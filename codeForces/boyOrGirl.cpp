//Problem:          Boy or Girl
//Problem Link:     https://codeforces.com/problemset/problem/236/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    string name;
    vector<int> freq(26);
    int distinct = 0;

    cin >> name;

    for(int i=0; i<freq.size(); i++)    freq[i] = 0;

    for(char a: name)   freq[a - 'a']++;
    for(int i=0; i<freq.size(); i++)    if(freq[i]>0)   distinct++;

    if (distinct%2 == 0)  cout << "CHAT WITH HER!" << endl;
    else    cout << "IGNORE HIM!" << endl;

    return 0;
}