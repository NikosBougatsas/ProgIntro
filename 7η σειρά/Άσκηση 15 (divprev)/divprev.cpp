//O(n) solution

#include "pzhelp"  
  
PROGRAM {  
  int N, i, s, x;  
  N = READ_INT();  
  int a[N];  
    
  for (i = 0; i < N; i++) {  
    a[i] = READ_INT();  
  }  
  
  i = 0;  
  s = 0;  
  x = a[0];  
  
  while (i < N - 1) {  
    s = s + a[i] % a[i + 1];  
    if ((s % a[i + 1]==0) && (a[i] % a[i + 1] == 0)) x = a[i + 1];  
    i++;  
  }
  
  WRITELN(x);  
}
