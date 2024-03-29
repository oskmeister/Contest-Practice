#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

#define sz .size()
#define rep(i, a, b) for(int i = a; i<b; i++) 

typedef long long int ll;

int n;

int x[16], y[16];
double d[16][16];

static inline double dist(int x1, int y1, int x2, int y2){
  int xd = x1-x2;
  int yd = y1-y2;
  return sqrt(xd*xd + yd*yd);
}

double best[1 << 16];

char str[50];

int t = 1;

void solve(){
  n = 2*n;
  rep(i, 0, 1 << n) best[i] = 100000000;
  best[0] = 0;
  rep(i, 0, n)
    scanf("%s%d%d", str, x+i, y+i);
  rep(i, 0, n)
    rep(j, 0, i)
      d[i][j] = d[j][i] = dist(x[i], y[i], x[j], y[j]);
  for(int i = 0; i<(1<<n); i++)
    if(__builtin_popcount(i)%2) continue;
    else for(int j = 0; j<n; j++)
      if(i & (1 <<j)) continue;
      else
	for(int k = 0; k<j; k++)
	  if(i & (1 << k)) continue;
	  else
	    best[i | (1<<j) | (1 << k)] = min(best[i | (1<<j) | (1 << k)], best[i]+d[j][k]);
	    
  printf("Case %d: %.2lf\n", t++, best[(1 << n)-1]);
}

int main(){
  while(scanf("%d", &n) && n) solve();
}