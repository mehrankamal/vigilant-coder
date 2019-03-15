#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    long k = 0;
    long count = 0, finalCount;
    int index = 0, len;
    cin >> str;
    cin >> k;

    len = str.length();


    for(int i=0; i<len; i++)
        if(str[i] == 'a')
            count++;

    finalCount = count * (k/len);
    k = k%len;

    for(int i=0; i<k; i++)
        if(str[i] == 'a')
            finalCount++;


    cout << finalCount << endl;

    return 0;
}
