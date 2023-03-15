//O(n^2) solution

#include <iostream>  
  
using namespace std;  
  
int main() {  
  int N, B, count = 0;  
  
  cin >> N >> B;
  
  int a[N];  
  
  for (int i = 0; i < N; i++) {  
    cin >> a[i];  
  }  
  
  for (int i = 0; i < N - 1; i++) {  
    bool swaps = false;  
    for (int j = N - 2; j > i - 1; j--) {  
      if (a[j] > a[j+1]) {  
        swaps = true;  
        swap(a[j], a[j + 1]);  
      }  
    }  
   if (!swaps) break;  
  }   
  
  int p =0 ,k = N - 1;  
  
  while (p <= k) {  
    if (a[p] + a[k] <= B) {  
      k--; p++;  
    }  
    else {k--;}  
    count++;  
  }  
  
  cout << count << endl;  
  
  return 0;  
  
}
