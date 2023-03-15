//O(n^2) solution

#include "pzhelp"  
  
PROGRAM {  
  int i, N, a[100000], j, k, l, s, b = 0;  
  N = READ_INT();  
  
  for (i = 0; i < N; i++) {  
    a[i] = READ_INT();  
  }
  
  for (j = 0; j < N - 2; j++) {  
    for (k = j + 2; k < N; k++) {  
      s = 0;  
      for (l = j + 1; l < k; l++) {  
        s=+a[l];  
      }  
      if ((s == a[j] + a[k]) && (b < k + 1)) b = k + 1;  
    }  
  }  
  WRITELN(b);
}
