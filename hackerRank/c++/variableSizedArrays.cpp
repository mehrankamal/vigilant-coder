//Problem:          
//Link:             

#include<iostream>

using namespace std;

typedef unsigned int uint;

int main()
{
    uint count;
    int n, q;
    cin >> n;
    cin >> q;
    int queries[q][3];
    int *arr[n];
    for(int i=0; i<n; i++)
    {
        cin  >> count;
        arr[i] = new int[count];
        for(int j=0; j<count; j++)
        {
            cin >> *((arr[i])+j);
        }
    }
    
    for(int i=0; i<q; i++)
    {
        for(int j=0; j<2; j++)
            cin >> queries[i][j];
        queries[i][2] = *(arr[queries[i][0]]+queries[i][1]);
    }

    for(int i = 0; i<q; i++)
        cout << queries[i][2] << endl;

    for(int i=0; i<n; i++)
        delete[] arr[i];

    
    return  0;
}