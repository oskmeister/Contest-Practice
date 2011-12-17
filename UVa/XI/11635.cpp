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


int n, h, m;

vi hotels;
vpi road[10000];


vi sssp(int s){
  set<pii> q;
  vi dist(n);
  dist.assign(100000000, n);
  dist[s] = 0;
  q.insert(pii(s, 0));
  while(!q.empty()){
    pii cur = *(q.begin());
    q.erase(q.begin());
    int v = cur.second;
    trav(it, road[v]){
      pii next = *it;
      int u = next.first;
      int tot = cur.first + next.second;
      dist[u] = min(dist[u], tot);
    }
  }
  return dist;
}

int hd[100][100];
int dp[100][601]; //minsta antalet hotel vi behöver stanna på för att komma till hotel [i] med [j] hotel kvar!

int s(int on, int minutes){
  
}

void solve(){
  scanf("%d", &h);
  rep(i, 0, h){
    int hot;
    scanf("%d", &hot);
    hotels.push_back(hot-1);
  }
  scanf("%d", &m);
  rep(i, 0, m){
    int a, b, t;
    scanf("%d%d%d", &a, &b, &t);
    a--; b--;
    road[a].push_back(pii(b, t));
    road[b].push_back(pii(a, t));
  }
  
  rep(i, 0, h){
    int s = hotels[i];
    vi res = sssp(s);
    rep(j, 0, h){
      hd[s][hotels[j]] = res[hotels[j]];
    }
  }
  int best = -1;
  rep(i, 0, 601)
}

int main(){
  while(scanf("%d", &n) && n) solve();
}