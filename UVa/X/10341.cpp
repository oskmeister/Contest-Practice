#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>

#define sz .size()

int p, r, q, s, t, u;

double fprim(double x){
  return -p*exp(-x) + q*cos(x) - r*sin(x) + s/(cos(x)*cos(x)) + 2*t*x;
}

double f(double x){
  return p*exp(-x) + q*sin(x) + r*cos(x) + s*tan(x) + t*x*x + u;
}

double solveIt(){
  if f(0) == 0) return 0;
  double x = 0.5;
  while(true){
    double xn = x - f(x)/fprim(x);
    if (fabs(xn-x) < 1e-7) return xn;
    x = xn;
  }
}

int main(){
  while (scanf("%d %d %d %d %d %d",&p,&q,&r,&s,&t,&u) == 6){
    if (f(0) * f(1) > 0){
      printf("No solution");
    } else {
      printf("%.4lf\n", solveIt());
    }
  }
}