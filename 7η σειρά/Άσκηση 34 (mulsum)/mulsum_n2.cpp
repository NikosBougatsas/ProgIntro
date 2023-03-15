//O(n^2) solution

#include "pzhelp"  
  
PROGRAM {  
  int N, M, i, j, k, s, x;  
  N = READ_INT(); M = READ_INT();  
  int a[N];  
  
  for (i = 0; i < N; i++) {  
    a[i] = READ_INT();  
  }  
  
  x = 0;  
  
  for (j = 0; j < N; j++) {  
    s = a[j];  
    for (k = j + 1; k < N; k++) {  
      s = s + a[k];  
      if ((s > x) && (s % M == 0)) x = s;  
    }  
  }  
  WRITELN(x);  
}
