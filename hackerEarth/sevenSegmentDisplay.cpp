//Problem:      
//Link:         

#include<iostream>
#include<cmath>
#include<cstring>

int codes[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

using namespace std;

long getMatch(char num[]);
void getHighest(const int matches);

int main()
{
    int T;
    cin >> T;
    
    char num[101];
    long matchSticks;

    for(int i = 0; i < T; i++)
    {
        cin >> num;
        getHighest(getMatch(num));
    }

    return 0;
}

long getMatch(char num[])
{
    int count = 0;
    int len  = strlen(num);

    if (num[0] == '0')
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
    char result[digits+1];
    cout << digits << endl;

    for(int i=0; i<digits; i++)
    {
        result[i] = '1';
        matches -= 2;
    }

    result[digits] = '\0';

    if (matches == 0)
        cout << result << endl;

    if (matches == 1)
    {
        result[0] = '7';
        cout << result << endl;
    }
}