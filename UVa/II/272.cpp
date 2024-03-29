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

int main(){
  bool which = true;
  while(true){
    int ch = getchar();
    if(ch == EOF) break;
    if(ch == '"'){
      if(which)
	printf("``");
      else
	printf("''");
      which ^= true;
    } else {
      putchar(ch);
    }
  }
}