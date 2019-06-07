//Problem:          Next Round
//Problem Link:     https://codeforces.com/contest/158/problem/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
  int T, place, count = 0;

  cin >> T >> place;
  vector<int> arr(T);

  for(int i=0; i<T; i++)
  {
    cin >> arr[i];
  }

  place = arr[place-1];

  for(int i = 0; i<T; i++)
  {
    if(arr[i] >= place && arr[i] != 0)  count++;
  }

  cout << count << endl;

  return  0;
}
