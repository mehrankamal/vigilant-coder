#include<bits/stdc++.h>

using namespace std;

//Variable declared for ext. eucledian algo.
int x, y, d;

int gcd(int a, int b);
int iterativegcd(int a, int b);
void extendedEuclidean(int a, int b);

int main()
{
    int a = 16, b = 10;
    cout << "GCD(" << a << ", " << b << ") = " << gcd(a, b) << ", " << iterativegcd(a, b) << endl;
    extendedEuclidean(a, b);
    cout << "Ext Euclid(" << a << ", " << b << ") = " << d << endl;
    cout << "Coefficients x and y are "<< x <<  " and " << y << endl;

    return 0;
}

int gcd(int a, int b)
{
    if(b==0)
        return a;
    else
        return gcd(b, a%b);
}

int iterativegcd(int a, int b)
{
    int m=min(a, b), gcd;
    for(int i=m; i>0; i--)
    {
        if(a%i == 0 && b%i ==0)
        {
            gcd = i;
            return gcd;
        }
    }
}

void extendedEuclidean(int a, int b)
{
    if(b==0)
    {
        d = a;
        x = 1;
        y = 0;
    }
    else
    {
        extendedEuclidean(b, a%b);
        int temp = x;
        x = y;
        y = temp - (a/b) * y;
    }
    
}