#include <bits/stdc++.h>
using namespace std;

bool ss(pair<int, int> u, pair<int, int> v)
{
  return u.second < v.second;
}

void sol()
{
  int n, res = 0, x = -INT_MAX, y = -INT_MAX;
  cin >> n;
  pair<int, int> A[n];
  for(auto &x:A) cin >> x.first >> x.second;
  sort(A, A + n, ss);
  for(auto a:A)
  {
    if(x < y) swap(x, y);
    if(a.first > x) {x = a.second; res++;}
    else if(a.first > y)  {y = a.second; res++;}
  }
  cout << res << "\n";
}

int main(){
  int test;
  cin >> test;
  while(test--) sol();
}