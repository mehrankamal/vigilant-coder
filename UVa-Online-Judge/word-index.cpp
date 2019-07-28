//Problem:          Word Index
//Problem Link:     https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=358

#include<bits/stdc++.h>

using namespace std;

int main()
{
    string input;
    int k = 1;
    list<string> mylist;
    map<string, int> wordmaps;
    
    for(int c = 'a'; c <= 'z'; c++)
        mylist.push_back(string(1, c));
    
    while(!(mylist.empty()))
    {
        string cursor = mylist.front();
        mylist.pop_front();
        // cout << "{" << cursor << ", " << k << "}\t";
        wordmaps.insert({cursor, k});
        k++;
        if(cursor.size() < 5)
            for(char c = (char)(cursor[cursor.size() - 1] + 1); c <= 'z'; c++)
                mylist.push_back(cursor + string(1, c));
    }

    // cout << endl << "Out of generating loop!!" << endl;

    while(cin >> input)
    {
        if(wordmaps.count(input) > 0)
            cout << wordmaps.find(input) -> second << endl;
        else
            cout << "0" << endl;
        
    }

    return 0;
}