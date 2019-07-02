//Problem:          Free spots
//Problem Link:     https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1644

#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<string> ans;
    while(true)
    {
        int w, h, n;
        cin >> w;
        if(w==0)    break;
        cin >> h >> n;

        int count = w * h;
        bool arr[h][w];
        for(int i=0; i<h; i++)  for(int j=0; j<w; j++)  arr[i][j] = true;
        for(int i=0; i<n; i++)
        {
            int x1, y1, x2, y2;
            cin >> x1 >> y1 >> x2 >> y2;
            int maxx = max(x1, x2);
            int maxy = max(y1, y2);
            int minx = min(x1, x2);
            int miny = min(y1, y2);
            for(int j=miny - 1; j<maxy; j++)
                for(int k=minx - 1; k<maxx; k++)
                    if(arr[j][k])
                    {
                        arr[j][k] = false;
                        --count;
                    }
        }
        if(count == 0)  cout << "There is no empty spots." << endl;
        else if(count == 1) cout << "There is one empty spot." << endl;
        else    cout << "There are " << count << " empty spots." << endl;
    }

    return 0;
}