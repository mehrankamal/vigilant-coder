//Problem:          Add All
//Problem Link:     https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1895

#include<bits/stdc++.h>

using namespace std;

struct compare
{
  bool operator()(const int& l, const int& r)
  {
      return l > r;
  }
};

int main()
{
    while(true)
    {
        int n;
        int  ans = 0;
        cin >> n;
        if (n == 0) break;
        priority_queue<int, vector<int>, compare> arr;

        while (n-- > 0)
        {
            int inp;
            cin >> inp;
            arr.push(inp);
        }
        
        while(arr.size() > 1)
        {
            int x = arr.top();
            arr.pop();
            x += arr.top();
            arr.pop();
            ans += x;
            arr.push(x);
        }
        cout << ans << endl;
    }

    return 0;
}