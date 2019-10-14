#include <stdio.h>

const int INF = 100000;

//k is number of denominations of the coin or length of d
int coin_change_modified(int d[], int n, int k) {
  int M[n+1];
  M[0] = 0;

  int S[n+1];
  S[0] = 0;

  int i, j;
  for(j=1; j<=n; j++) {
    int minimum = INF;
    int coin=0;

    for(i=1; i<=k; i++) {
      if(j >= d[i]) {
        if((1+M[j-d[i]]) < minimum) {
          minimum = 1+M[j-d[i]];
          coin = i;
        }
      }
    }
    M[j] = minimum;
    S[j] = coin;
  }

  int l = n;
  while(l>0) {
    printf("%d\n",d[S[l]]);
    l = l-d[S[l]];
  }
  return M[n];
}

int main() {
  // array starting from 1, element at index 0 is fake
  int d[] = {0, 1, 2, 3};
  coin_change_modified(d, 5, 3);
  return 0;
}
