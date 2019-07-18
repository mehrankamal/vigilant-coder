//Problem:          Updating a Dictionary
//Problem Link:     https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3948

#include<bits/stdc++.h>

using namespace std;

// String tokenizer class.
class StringTokenizer {

public:

    StringTokenizer(const string& s, const char* delim = NULL) :
    str_(s), count_(-1), begin_(0), end_(0)
    {
        if (!delim)
            delim_ = " \f\n\r\t\v";  //default to whitespace
        else
            delim_ = delim;

      // Point to the first token
        begin_ = str_.find_first_not_of(delim_);
        end_ = str_.find_first_of(delim_, begin_);
   }

    size_t countTokens()
    {
        if (count_ >= 0) // return if we've already counted
            return(count_);

        string::size_type n = 0;
        string::size_type i = 0;

        for (;;)
        {
            if ((i = str_.find_first_not_of(delim_, i)) == string::npos)
                break;
            i = str_.find_first_of(delim_, i+1);
            n++;
            if (i == string::npos)
                break;
        }
        return (count_ = n);
    }
    bool hasMoreTokens() {return(begin_ != end_);}
    string nextToken()
    {
        string s = "";
        if (begin_ != string::npos && end_ != string::npos)
        {
            s = str_.substr(begin_, end_-begin_);
            begin_ = str_.find_first_not_of(delim_, end_);
            end_ = str_.find_first_of(delim_, begin_);
        }
        else if (begin_ != string::npos && end_ == string::npos)
        {
            s = str_.substr(begin_, str_.length()-begin_);
            begin_ = str_.find_first_not_of(delim_, end_);
        }
        return s;
    }

    private:
        StringTokenizer() {};
        string delim_;
        string str_;
        int count_;
        int begin_;
        int end_;
};

int main()
{
    int n;
    cin >> n;

    while(n-- > 0)
    {
        string key = "", val = "", first, second;
        cin >> first;
        first = first.substr(1, first.length() - 2);
        cin >> second;
        second = second.substr(1, second.length() - 2);

        vector<string> added, removed, changed;

        StringTokenizer tokensA(first, ",");
        StringTokenizer tokensB(second, ",");

        map<string, string> myMap;
        while(tokensA.hasMoreTokens())
        {
            StringTokenizer keyVal(tokensA.nextToken(), ":");
            string k = keyVal.nextToken(), v = keyVal.nextToken();
            myMap.insert(pair<string, string>(k, v));
        }

        while(tokensB.hasMoreTokens())
        {
            StringTokenizer keyVal(tokensB.nextToken(), ":");
            string key = keyVal.nextToken(), val = keyVal.nextToken();

            if(myMap.count(key) == 0)
                added.push_back(key);
            else
            {
                if(myMap.at(key) != val)    changed.push_back(key);
                myMap.erase(key);
                
            }
        }

        for(auto i = myMap.begin(); i!=myMap.end(); ++i)
        {
            removed.push_back(i->first);
        }

        if(added.size() == 0 && removed.size() == 0 && changed.size() == 0)
        {
            cout << "No changes" << endl;
        }
        else
        {
            sort(added.begin(), added.end());
            sort(removed.begin(), removed.end());
            sort(changed.begin(), changed.end());
            for(int i=0; i<added.size(); i++)
                cout << ((i==0)?"+":",") << added[i];
            cout << ((added.size() != 0)?"\n":"");
            for(int i=0; i<removed.size(); i++)
                cout << ((i==0)?"-":",") << removed[i];
            cout << ((removed.size() != 0)?"\n":"");
            for(int i=0; i<changed.size(); i++)
                cout << ((i==0)?"*":",") << changed[i];
            cout << ((changed.size() != 0)?"\n":"");
        }
        cout << endl;

    }

    return 0;
}