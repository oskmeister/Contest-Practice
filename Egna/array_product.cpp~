#include <cstdio>
#include <cstring>

int n;

int main(){
  scanf("%d", &n);
  int a[n];
  for(int i = 0; i<n; i++) scanf("%d", a+i);
  int b[n];
  for(int i = 0; i<n; i++) b[i] = 1;
  long long int prod = 1;
  for(int i = 0; i<n-1; i++){
    prod *= a[i];
    b[i+1] = prod;
  }
  prod = 1;
  for(int i = n-1; i > 0; i--){
    prod *= a[i];
    b[i-1] *= prod;
  }
  for(int i = 0; i<n; i++) printf("%d ", b[i]);
}