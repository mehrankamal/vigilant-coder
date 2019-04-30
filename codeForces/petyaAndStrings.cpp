//Problem:          Petya and Strings
//Problem Link:     https://codeforces.com/problemset/problem/112/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    string strA, strB;
    bool lexo;
    cin >> strA;
    cin >> strB;
    for(int i=0; i<strA.length(); i++)
    {
        strA[i] = tolower(strA[i]);
        strB[i] = tolower(strB[i]);
    }
    
    if(strA == strB)
    {
        cout << "0" << endl;
        return 0;
    }
    else if(lexicographical_compare(strA.begin(), strA.end(), strB.begin(), strB.end()))   cout << "-1" << endl;
    else    cout << "1" << endl;
    

    return 0;
}