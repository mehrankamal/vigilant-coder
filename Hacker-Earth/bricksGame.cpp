//Problem:      Bricks Game 
//Link:         https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/bricks-game-5140869d/

#include<iostream>

using namespace std;

int  main()
{
    int i = 1, N;
    bool motu = false, patlu = false;

    cin >> N;

    while(true)
    {
        N = N - i;
        motu = false;
        patlu = true;
        if(N <= 0)
            break;
        N = N - i*2;
        patlu = false;
        motu = true;
        if(N <= 0)
            break;
        i++;
    }

    if(motu)
        cout << "Motu" << endl;
    else
        cout << "Patlu" << endl;

    return 0;
}