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
#define pb(x) push_back(x)
#define rep(i, a, b) for(int i = a; i<b; i++) 
#define trav(it, v) for(typeof((v).begin()) it = (v).begin(); it != (v).end(); ++it)


typedef pair<int, int> pii;
typedef long long int ll;
typedef vector<int> vi;
typedef vector<pii> vpi;

int n, r;

struct arr {
  int base;
  int size;
  int D;
  vpi bounds;
  vi C;
};

map<string, arr> arrs;

int main(){
  scanf("%d%d", &n, &r);
  rep(i, 0, n){
    string name;
    arr array;
    cin >> name >> array.base >> array.D;
    rep(j, 0, array.D){
      int l, u;
      cin >> l >> u;
      array.bounds.pb(pii(l, u));
    }
    arrs[name] = array;
  }
  rep(i, 0, r){
    string name;
    vi dimensions;
    cin >> name;
    int ds = arrs[name].D;
    rep(j, 0, ds){
      int w;
      cin >> w;
      dimensions.pb(w);
    }
    
    array a = arrs[name];
    
  }
}