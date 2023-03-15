//O(n) solution

#include "pzhelp"  
  
PROGRAM {  
  int N, k, max = 0, j = 0, p = 1, d;  
  N = READ_INT(); k = READ_INT();  
  
  int a[N];  
  
  for (int i = 0; i < N; i++) {  
    a[i] = READ_INT();  
  }  
  
  while (p < N) {  
    d = a[p] - a[j];  
    if (d <= 2 * k) {  
      p++;  
      if (p - j > max) {max = p - j;}  
    }  
    else j++;  
  }  
  WRITELN(max);  
}
