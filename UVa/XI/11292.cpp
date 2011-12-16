#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

#define sz .size()
#define rIA(x, n) { for(int i = 0; i<n; i++) scanf("%d", x+i); }
#define rLA(x, n) { for(int i = 0; i<n; i++) scanf("%lld", x+i); }

typedef long long int ll;

ll n, m;

ll a[20000], b[20000];

void solve(){
  rLA(a, n);
  rLA(b, m);
  sort(a, a+n);
  sort(b, b+m);
  ll d = 0, k = 0;
  ll s = 0;
  while(d != n && k != m){
    if(a[d] <= b[k]){
      s += b[k];
      d++;
    }
    k++;
  }
  if(d != n) printf("Loowater is doomed!\n");
  else printf("%lld\n", s);
}

int main(){
  while(scanf("%lld%lld", &n, &m) && (n || m)) solve();
}