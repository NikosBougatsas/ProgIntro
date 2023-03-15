//O(n) solution

#include <iostream>  
#include <algorithm>  
  
using namespace std;  
  
#define MAXN 1000100  
  
int main() {  
  int N, M, i, u, s = 0, maxim[MAXN + 1], minim[MAXN + 1];  
  cin >> N;  
  cin >> M;  
  
  for (i = 0; i < N; i++) {  
    cin >> u;  
    s += u;  
    maxim[s % M]=s;  
    if (!minim[s % M] && s % M > 0) {  
      minim[s % M] = s;  
    }  
  }  
  
  int ans = 0;  
  
  for (int i = 0; i < M; i++) {  
    ans = max(ans,maxim[i] - minim[i]);  
  }  
  
  cout << ans << endl;  
  
  return 0;  
}
