//O(n^2) solution

#include "pzhelp"  
  
PROGRAM {  
  int i, j, N, k, s, x, count = 0;  
  
  N = READ_INT(); x = READ_INT();  
  
  int a[N];  
  
  for (k = 0; k < N; k++) {  
    a[k] = READ_INT();  
  }  
  
  for (i = 0; i < N; i++) {  
    for (j = i + 1; j < N; j++) {  
      if ((a[i] > x) || (a[j] > x)) continue;  
      else {  
        s = 0;  
        s = a[i] + a[j];  
        if (s == x) count++;  
      }  
    }  
  }  
  
  WRITELN(count);  
  
}
