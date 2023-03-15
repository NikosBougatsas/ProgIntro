//O(n^2) solution

#include "pzhelp"  
  
PROGRAM {  
  int N, i, j, s;  
  
  N = READ_INT();  
  
  int a[N];  
  int x = 0;  
  
  for (i = 0; i < N; i++) {  
    a[i] = READ_INT();  
  }  
  
  for (i = 0; i < N; i++) {  
    if (a[i] < 0) continue;  
    s = a[i];  
    for (j = i + 1; j < N; j++) {  
      s = s + a[j];  
      if (s > x) {  
        x = s;  
      }  
    }  
  }  
  WRITELN(x);  
}
