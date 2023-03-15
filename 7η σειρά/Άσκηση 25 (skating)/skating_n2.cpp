//O(n^2) solution

#include "pzhelp"  
  
PROGRAM {  
  int N , s = 0,max = 0;  
  N = READ_INT();  
  
  int a[N];  
  for (int i = 0; i < N; i++) {  
    a[i] = READ_INT();  
  }  
  
  for (int j = 0; j < N; j++) {  
    if (a[j] <= 0) continue;  
    s = 0;  
    for (int k = j; k < N; k++) {  
      s=+a[k];  
      if (s < 0) break;  
    }  
    if (s > max) max = s;  
    s = 0;  
  }  
  
  WRITELN(max);  
  
}
