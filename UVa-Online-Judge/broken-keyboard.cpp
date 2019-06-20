//Problem:          Broken Keyboard
//Problem Link:     https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3139

#include<bits/stdc++.h>

using namespace std;

void showlist(list <char> g) 
{ 
    list <char> :: iterator it; 
    for(it = g.begin(); it != g.end(); ++it) 
        cout << *it;
    cout << '\n'; 
}

int main()
{
    while(true)
    {
        string text;
        getline(cin, text);
        bool insert_right = true;
        list<char> ans;
        vector<char> word;
        if(text.empty())    break;
        for(int i=0; i<text.length(); i++)
        {
            if(text[i] == '[')
            {
                if(insert_right) for(int j=0; j<word.size(); j++) ans.push_back(word[j]);
                else for(int j=word.size()-1; j>=0; j--) ans.push_front(word[j]);
                insert_right = false;
                word.clear();
            }
            else if(text[i] == ']')
            {
                if(insert_right) for(int j=0; j<word.size(); j++) ans.push_back(word[j]);
                else for(int j=word.size()-1; j>=0; j--) ans.push_front(word[j]);
                insert_right = true;
                word.clear();
            }
            else
                word.push_back(text[i]);
        }

        if(insert_right) for(int j=0; j<word.size(); j++) ans.push_back(word[j]);
        else for(int j=word.size()-1; j>=0; j--) ans.push_front(word[j]);   

        showlist(ans);
    }

    return 0;
}