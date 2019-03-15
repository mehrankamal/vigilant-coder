#include<bits/stdc++.h>

using namespace std;

int recursivePow(int x, int n);
int iterativePow(int x, int n);
int binaryExp(int x, int n);
int iterativeBinaryExp(int x, int n);
int modExp(int x, int n, int m);
int iterativeModExp(int x, int n, int m);

int main()
{
    int x=2, n=16, m = 100;
    cout << "Exp: (" << x << ", " << n << ") = " << recursivePow(x, n) << ", " << iterativePow(x, n) << endl;
    cout << "Binary Exp: (" << x << ", " << n << ") = " << binaryExp(x, n) << ", " << iterativeBinaryExp(x, n) << endl;
    cout << "Modular Exp: (" << x << ", " << n << ", " << m << ") = " << modExp(x, n, m) << ", " << iterativeModExp(x, n, m) << endl;

    return 0;
}

int recursivePow(int x, int n)
{
    if(n==0)
        return 1;
    else
        return x * recursivePow(x , n-1);
}

int iterativePow(int x, int n)
{
    int res = 1;
    
    while(n>0)
    {
        res = res*x;
        n--;
    }

    return res;
}

int binaryExp(int x, int n)
{
    if(n==0)
        return 1;
    else if(n%2 == 0)
        return binaryExp(x*x, n/2);
    else
        return x*binaryExp(x*x, (n-1)/2);
}

int iterativeBinaryExp(int x, int n)
{
    int result = 1;
    while(n>0)
    {
        if(n%2 == 1)
            result = result * x;
        x = x*x;
        n = n/2;
    }
    return result;
}

int modExp(int x, int n, int m)
{
    if(n==0)
        return 1;
    else if(n%2 == 0)
        return modExp((x*x)%m, n/2, m);
    else
        return (x*modExp((x*x)%m, (n-1)/2, m))%m;  
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