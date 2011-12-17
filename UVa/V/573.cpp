#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

#define sz .size()
#define rep(i, a, b) for(int i = a; i<b; i++) 
#define trav(it, v) for(typeof((v).begin()) it = (v).begin(); it != (v).end(); ++it)


typedef pair<int, int> pii;
typedef long long int ll;
typedef vector<int> vi;
typedef vector<pii> vpi;

int h,u,d,f;

void solve(){
  int delta = f*u;
  h *= 100;
  u *= 100;
  d *= 100;
  int at = 0;
  for(int i = 1;;i++){
    at += u;
    if(at > h){
      printf("success on day %d\n", i);
      break;
    }
    at -= d;
    if(at < 0){
      printf("failure on day %d\n", i);
      break;
    }
    u -= delta;
    u = max(u, 0);
  }
}

int main(){
  while(scanf("%d%d%d%d", &h, &u, &d, &f) && (h || u || d || f)) solve();
}