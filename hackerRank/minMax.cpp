#include<iostream>

using namespace std;

int main()
{
    int a, b, c;
    int max, min;

    cin >> a >> b >> c;

    switch (a>b && a>c)
    {
        case 1:
            max = a;
            break;
    
        default:
            switch (b>a && b>c)
            {
                case 1:
                     max = b;
                    break;
            
                default:
                    max = c;
                    break;
            }
            break;
    }

    switch (a<b && a<c)
    {
        case 1:
            min = a;
            break;
    
        default:
            switch (b<a && b<c)
            {
                case 1:
                     min = b;
                    break;
            
                default:
                    min = c;
                    break;
            }
            break;
    }

    cout << max << ", " << min;

    return 0;
}