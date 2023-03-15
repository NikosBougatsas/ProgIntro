//O(n) solution

#include "pzhelp"  
  
PROGRAM {  
  int i, N, a[100000], j, k, s, b = 0;  
  N=READ_INT();  
  
  for (i = 0; i < N; i++) {  
    a[i] = READ_INT();  
  }  
  
  for (j = 0; j < N - 2; j++) {  
    k = j + 1;  
    s = 0;  
    while (k < N) {  
      s=+a[k];  
      k++;  
      if ((s == a[k] + a[j]) && (k + 1) > b) {  
        b = k + 1; break;  
      }  
      else if (s == a[k] + a[j]) break;  
    }  
  }  
  WRITELN(b);  
}
