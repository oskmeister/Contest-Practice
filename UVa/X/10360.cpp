#include <cstdio>
#include <cstring>

#define gridSz 1025

int c[gridSz][gridSz];


void solve(){
  memset(c, 0, sizeof(c));
  int d, n;
  scanf("%d%d", &d, &n);
  for(int i = 0; i<n; i++){
    int x, y, p;
    scanf("%d%d%d", &x, &y, &p);
    for(int nx = x-d; nx <= x+d; nx++)
      for(int ny = y-d; ny <= y+d; ny++)
	if(nx >= 0 && ny >= 0 && nx < gridSz && ny < gridSz)
	  c[nx][ny] += p;
  }
  int bx = 1, by = 1, bp = 0;
  for(int i = 0; i<gridSz; i++)
    for(int j = 0; j<gridSz; j++)
      if(c[i][j] > bp){
	bx = i;
	by = j;
	bp = c[i][j];
      }
  printf("%d %d %d\n", bx, by, bp);
}

int main(){
  int t;
  scanf("%d", &t);
  while(t--) solve();
}