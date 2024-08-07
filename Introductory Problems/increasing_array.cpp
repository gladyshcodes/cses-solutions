#include <iostream>
using namespace std;

#define ll long long

// [1,4,5,6,7,7]

int main() {
  int n;
  cin >> n;

  int mx=0;
  ll ans=0;
  for(int i=0; i<n; ++i) {
    int x;
    cin >> x;

    mx=max(mx, x);
    ans+=mx-x;
  }
  cout << ans;
}