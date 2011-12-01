#include <cmath>
#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <bitset>
#include <algorithm>
#include <cstring>
#include <sstream>
#include <stack>

using namespace std;

//Utility definitions
#define rep(i, a, b) for(int i = (a); i < int(b); ++i)
#define rrep(i, a, b) for(int i = (a)-1; i >= (b); --i)
#define trav(it, v) for(typeof((v).begin()) it = (v).begin(); it != (v).end(); ++it)
#define readInt(a) scanf("%d", &a)
#define readInts(a, c) rep(i, 0, c)  scanf("%d", a+c)
#define readLong(a) scanf("%lld", &a)
#define readLongs(a, c) rep(i, 0, c) scanf("%lld", a+c)


//Typedefs
typedef double fl;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int dp[100][100][100];

int s(int a, int b, int c){
  if(!a + !b + !c == 2) return 0;
  if(dp[a][b][c]) return dp[a][b][c];

  int num = 0;
  if(a && b) num = max(num, 1+s(a-1, b-1, c+1));
  if(a && c) num = max(num, 1+s(a-1, b+1, c-1));
  if(b && c) num = max(num, 1+s(a+1, b-1, c-1));

  return dp[a][b][c] = num;
}


void solve(){
  memset(dp, 0, sizeof(dp));
  string st;
  cin >> st;
  int a=0,b=0,c=0;
  for(int i = 0; i<st.size(); i++)
    if(st[i] == 'a') a++;
    else if(st[i] == 'b') b++;
    else c++;

  cout << (a+b+c-s(a, b, c)) << endl;
}

int main(){
  int T;
  readInt(T);
  while(T--) solve();
}
