#include<bits/stdc++.h>

using namespace std;

int x, y, d;

int iterativeModExp(int x, int n, int m);
int modInverse(int, int);
int euclidModInv(int, int);
int fermatsModInv(int, int);
void extendedEuclid(int, int);

int main()
{
    int a = 5, m = 11;

    cout << "modInverse(" << a << ", " << m << ") = " << modInverse(a, m) << ", " << euclidModInv(a, m)  << ", " << fermatsModInv(a, m) << endl;

    return 0;
}

int modInverse(int a, int m)
{
    a = a%m;
    for(int b = 1; b<m; b++)
    {
        if((a*b)%m == 1)
            return b;
    }
}

int euclidModInv(int a, int b)
{
    extendedEuclid(a, b);

    return (x%b + b)%b;
}

int fermatsModInv(int a, int b)
{
    return iterativeModExp(a, b-2, b);
}

void extendedEuclid(int a, int b)
{
    if(b==0)
    {
        d = a;
        x = 1;
        y = 0;
    }
    else
    {
        extendedEuclid(b, a%b);
        int temp = x;
        x = y;
        y = temp - (a/b) * y;
    }
    
}

int iterativeModExp(int x, int n, int m)
{
    int result = 1;
    while(n>0)
    {
        if(n%2 == 1)
            result = (result * x) % m;
        x = (x*x)%m;
        n = n/2;
    }

    return result;
}