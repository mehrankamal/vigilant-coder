//Problem:      Seven-Segment Display
//Link:         https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/seven-segment-display-nov-easy-e7f87ce0/submissions/

#include<iostream>
#include<cmath>
#include<cstring>

int codes[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

using namespace std;

long getMatch(string );
void getHighest(const int matches);

int main()
{
    int T;
    cin >> T;
    
    string num;
    long matchSticks;

    for(int i = 0; i < T; i++)
    {
        cin >> num;
        getHighest(getMatch(num));
    }

    return 0;
}

long getMatch(string num)
{
    int count = 0;
    int len  = num.length();

    if (num == "0")
        return codes[num[0] - '0'];

    for(int i = 0; i < len; i++)
    {
        count += codes[num[i] - '0'];
    }

    return count;
}

void getHighest(int matches)
{
    unsigned int digits = (matches/2);
    string result;
 //   cout << digits << endl;

    if(matches%2==0)
    {
        for(int i=0; i<digits; i++)
            cout << "1";
        cout << endl;
    }
    else
    {
        cout << "7";
        for(int i=1; i<digits; i++)
            cout << "1";
        cout << endl;

    }
    

    // for(int i=0; i<digits; i++)
    // {
    //     result[i] = '1';
    //     matches -= 2;
    // }

    // result[digits] = '\0';

    // if (matches == 0)
    //     cout << result << endl;

    // if (matches == 1)
    // {
    //     result[0] = '7';
    //     cout << result << endl;
    // }
}