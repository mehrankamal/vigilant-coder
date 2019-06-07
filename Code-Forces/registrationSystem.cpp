//Problem:      Registration System
//Link:         https://codeforces.com/problemset/problem/4/C

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int requests;
    cin >> requests;
    map<string, int> database;
    for(int i=0; i<requests; i++)
    {
        string query;
        cin >> query;
        if(database.count(query)==0)
        {
            cout << "OK" << endl;
            database[query] = 1;
        }
        else
        {
            cout << query << database[query] << endl;
            database[query]++;
        }
    }

    return 0;
}