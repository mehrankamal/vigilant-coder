//Problem:		Burger Time?
//Problem Link: 	https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2708

#include<bits/stdc++.h>

using namespace std;

int main()
{
  int T;

  while(1) {
    cin >> T;

    if(T==0)
    {break;}

    char inp;
    vector<int> rest;
    vector<int> drug;
    int minDist = -1;

    for(int i=0; i<T; i++)
    {
      cin >> inp;
      if (inp == 'Z')
        minDist = 0;
      else if(inp == 'R')
        rest.push_back(i);
      else if(inp == 'D')
        drug.push_back(i);
    }

    if(minDist == 0)
      cout << "0" << endl;
    else
    {
      minDist = INT_MAX;
      int dist;
      int restLen = rest.size(), drugLen = drug.size();
      for (int i=0; i<restLen; i++)
      {
        for(int j=0; j<drugLen; j++)
        {
          dist = abs(drug[j] - rest[i]);
          if(dist < minDist)  minDist = dist;
        }
      }
      cout << minDist << endl;
    }
  }

  return 0;
}
