//Problem:          Rotated Square
//Problem Link:     https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1796

#include<bits/stdc++.h>
#define loop(i, n) for(int i=0; i<(int)n; i++)
#define vcc vector<char>
#define v2c vector<vcc>

using namespace std;

bool check(v2c &big, v2c &small, int y, int x)
{
    for(int i=y, k=0; k < small.size(); i++, k++)
        for(int j=x, l=0; l < small.size(); j++, l++)
            if(big[i][j] != small[k][l])
                return false;
    return true;
}

void rotate(v2c &charArr)
{
    for (int i = 0; i < charArr.size() / 2; i++)
    { 
        for (int j = i; j < charArr.size() - i - 1; j++)
        {
            int temp = charArr[i][j]; 
            charArr[i][j] = charArr[charArr.size() - 1 - j][i]; 
            charArr[charArr.size() - 1 - j][i] = charArr[charArr.size() - 1 - i][charArr.size() - 1 - j]; 
            charArr[charArr.size() - 1 - i][charArr.size() - 1 - j] = charArr[j][charArr.size() - 1 - i]; 
            charArr[j][charArr.size() - 1 - i] = temp; 
        } 
    }
}

int main()
{
    while(true)
    {
        int N, n;
        cin >> N >> n;
        if (n == 0) break;
        v2c bigGrid(N, vcc(N, 0));
        v2c smallGrid(n, vcc(n, 0));

        loop(i, N)
            loop(j, N)
                cin >> bigGrid[i][j];

        loop(i, n)
            loop(j, n)
                cin >> smallGrid[i][j];

        int a = 0, b = 0, c = 0, d = 0;


        loop(i, N - n + 1)
        {
            loop(j, N - n + 1)
                if(smallGrid[0][0] == bigGrid[i][j])
                    a += (check(bigGrid, smallGrid, i, j))?1:0;
        }

        rotate(smallGrid);

        loop(i, N - n + 1)
        {
            loop(j, N - n + 1)
                if(smallGrid[0][0] == bigGrid[i][j])
                    b += (check(bigGrid, smallGrid, i, j))?1:0;
        }

        rotate(smallGrid);

        loop(i, N - n + 1)
        {
            loop(j, N - n + 1)
                if(smallGrid[0][0] == bigGrid[i][j])
                    c += (check(bigGrid, smallGrid, i, j))?1:0;
        }

        rotate(smallGrid);

        loop(i, N - n + 1)
        {
            loop(j, N - n + 1)
                if(smallGrid[0][0] == bigGrid[i][j])
                    d += (check(bigGrid, smallGrid, i, j))?1:0;
        }

        cout << a << " " << b << " " << c << " " << d << endl;
    }

    return 0;
}