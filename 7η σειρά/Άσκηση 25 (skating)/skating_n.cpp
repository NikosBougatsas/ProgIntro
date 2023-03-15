//O(n) solution

#include "pzhelp"  
  
PROGRAM {  
  int N, s = 0, max = 0;  
  N = READ_INT();  
  
  int a[N];  
  for (int i = 0; i < N; i++) {  
    a[i] = READ_INT();  
  }  
  
  for (int j = N - 1; j >= 0; j--) {  
    s=+a[j];  
    if (s > max) max = s;  
  }  
  
  WRITELN(max);  
  
}
