/*
You all must have seen a seven segment display.If not here it is:



Alice got a number written in seven segment format where each segment was creatted used a matchstick.

Example: If Alice gets a number 123 so basically Alice used 12 matchsticks for this number.

Alice is wondering what is the numerically largest value that she can generate by using at most the matchsticks that she currently possess.Help Alice out by telling her that number.

 

Input Format:

First line contains T (test cases).

Next T lines contain a Number N.

Output Format:

Print the largest possible number numerically that can be generated using at max that many number of matchsticks which was used to generate N.

Constraints:



SAMPLE INPUT 
2
1
0

SAMPLE OUTPUT 
1
111

Explanation
If you have 1 as your number that means you have 2 match sticks.You can generate 1 using this.

If you have 0 as your number that means you have 6 match sticks.You can generate 111 using this.
*/

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