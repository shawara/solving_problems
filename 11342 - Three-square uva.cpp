#include <bits/stdc++.h>

using namespace std;

bool square[50001];

int main() {

  for(int i = 0; i * i <= 50000; ++i) square[i * i] = 1;
  int n,t;
  cin>>t;
  while(t--) {
        cin>>n;
    bool found = false;
    int a[3];
    for(int z=0; z*z<=n; z++){
    for(int i = z; i * i+z*z <= n; i++) {
      if(square[n - i * i -z*z]) {
    a[0]=i; a[1]=z; a[2]=sqrt(n-i*i-z*z);
        found = true; break;
      }
    }
      if(found) break;
  }
  sort(a,a+3);
  if(found) cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
  else cout<<"-1\n";

  }
  return 0;
}
