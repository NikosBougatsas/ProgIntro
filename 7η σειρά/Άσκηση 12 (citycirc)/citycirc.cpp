#include <iostream>  
  
using namespace std;  
  
const int MAXN = 1000010;  
  
int n, a[2 * MAXN];  
  
int main () {  
	cin >> n;  
  for (int i=0; i<n; i++)  
    cin >> a[i];  
  
  for (int i=n; i<2*n; i++)  
    a[i] = a[i-n];  
  
  int start = 0;  
  while (start < n) {  
    int s = 0, i;  
    bool is_valid = true;  
    for (i = start; i - start + 1 <= n; i++) {  
      s += a[i];  
      if (s < 0) {  
        is_valid = false;
        break;  
      }
    } 
    if (is_valid == true) {  
      cout << start + 1 << endl;
      return 0;  
    } 
    else {
      start = i + 1;
    }
  }  
  cout << 0 << endl;  
  return 0;  
}
