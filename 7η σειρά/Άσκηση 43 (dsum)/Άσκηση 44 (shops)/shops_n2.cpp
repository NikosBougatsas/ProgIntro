//O(n^2) solution

#include "pzhelp"  
  
PROGRAM {  
  int N, k, i, j, p, q, s, max;  
  N = READ_INT(); k = READ_INT();  
  
  int a[N],sum[N - k + 1];  
  
  for (i = 0; i < N; i++) {  
    a[i] = READ_INT();  
  }  
  
  for (p = 0; p < N - k + 1; p++) {  
    sum[p] = 0;  
    for (q = p; q < p + k; q++) {  
      sum[p] = sum[p] + a[q];  
    }  
  }  
  
  max = 0;  
  
  for (j = 0; j < N - 2*k + 1; j++) {  
    for (i = j + k; i < N - k + 1; i++) {  
      s = sum[j] + sum[i];  
         if (s > max) max = s;  
       }  
     }  
  WRITELN(max);  
  
}
