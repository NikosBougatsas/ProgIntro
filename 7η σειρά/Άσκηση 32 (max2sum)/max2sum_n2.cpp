//O(n^2) solution

#include "pzhelp"  
  
PROGRAM {  
  int N, i, s, sum, j, k;  
  
  N = READ_INT();  
  
  int a[N];  
  
  for (i = 0; i < N; i++) {  
    a[i] = READ_INT();  
  }  
  
  s = 0;  
  
  for (j = 0; j < N; j++) {  
    for (k = j + 1; k < N; k++) {  
      sum = a[k] + a[j] + k - j;  
      if (sum > s) s = sum;  
    }  
  }  
  
  WRITELN(s);  
}
