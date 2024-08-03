#include <iostream>
#define ll long long
using namespace std;
 
int main() {
  string s;
  cin >> s;
 
  int ans=1, c=0;
  char l=s[0];
 
  for(char d : s) {
    if(d==l) {
      ++c;
      ans=max(ans, c);
    } else {
      l=d;
      c=1;
    }
 
  }
 
  cout << ans << endl;
 
  return 0;
}