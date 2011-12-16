#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

#define sz .size()

#define rep(i, a, b) for(int i = a; i<b; i++) 

typedef long long int ll;

int m, c;

int cost[20][20];
int cnt[20];
bool can[20][201];

void solve(){
  memset(can, 0, sizeof(can));
  scanf("%d%d", &m, &c);
  rep(i, 0, c){
    scanf("%d", cnt+i);
    rep(j, 0, cnt[i]) scanf("%d", cost[i]+j);
  }
  rep(i, 0, cnt[0]) if(cost[0][i] <= m) can[0][cost[0][i]] = true;
  rep(i, 1, c)
    rep(k, 0, m+1)
      if(can[i-1][k]) 
	rep(j, 0, cnt[i])
	  if(k+cost[i][j] <= m) can[i][k+cost[i][j]] = true;
  int best = 0;
  rep(j, 0, m+1)
   if(can[c-1][j]) best = max(best, j);
  if(!best) puts("no solution");
  else printf("%d\n", best);
}

int main(){
  int t;
  scanf("%d", &t);
  while(t--) solve();
}