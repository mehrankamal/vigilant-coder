/*
The factorial of the integer , written , is defined as:

Calculate and print the factorial of a given integer.

For example, if , we calculate  and get .

Function Description

Complete the extraLongFactorials function in the editor below. It should print the result and return.

extraLongFactorials has the following parameter(s):

n: an integer
Note: Factorials of  can't be stored even in a  long long variable. Big integers must be used for such calculations. Languages like Java, Python, Ruby etc. can handle big integers, but we need to write additional code in C/C++ to handle huge values.

We recommend solving this challenge using BigIntegers.

Input Format

Input consists of a single integer 

Constraints


Output Format

Print the factorial of .

Sample Input


Sample Output


Explanation

*/

#include<bits/stdc++.h>

#define MAX 500

using namespace std;

int mul(int n, int fact[], int size);

int main()
{
    int n;
    cin >> n;

    int fact[MAX], factSize = 1;
    fact[0] = 1;

    for(int i=2; i<=n; i++)
        factSize = mul(i, fact, factSize);

    for(int i=factSize-1; i>=0; i--)
        cout << fact[i];

    cout << endl;

    return 0;
}

int mul(int n, int fact[], int size)
{
    int carry = 0;
    for(int i=0; i< size; i++)
    {
        int prod = fact[i] * n + carry;
        fact[i] = prod % 10;
        carry = prod / 10;
    }

    while (carry)
    {
        fact[size] = carry%10;
        carry /= 10;
        size++;
    }

    return size;
}