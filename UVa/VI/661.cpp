#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
#include <iostream>
#include <string>
#include <map>

using namespace std;

#define sz .size()
#define rep(i, a, b) for(int i = a; i<b; i++) 
#define trav(it, v) for(typeof((v).begin()) it = (v).begin(); it != (v).end(); ++it)
#define pb(x) .push_back(x);


typedef pair<int, int> pii;
typedef long long int ll;
typedef vector<int> vi;
typedef vector<pii> vpi;

int n, m, c, ci[20], w;
bool q[20];

int s = 1;


void solve(){
  memset(q, 0, sizeof(q));
  rep(i, 0, n){
    scanf("%d", ci+i);
  }
  int at = 0;
  int h = 0;
  rep(i, 0, m){
    scanf("%d", &w);
    w--;
    at += (q[w] ? -ci[w] : ci[w]);
    q[w] ^= true;
    h = max(h, at);
  }
  printf("Sequence %d\n", s++);
  if(h <= c) printf("Fuse was not blown.\nMaximal power consumption was %d amperes.\n", h);
  else printf("Fuse was blown.\n");
  printf("\n");
}

int main(){
  while(scanf("%d%d%d", &n, &m, &c) && (n || m || c)) solve();
}