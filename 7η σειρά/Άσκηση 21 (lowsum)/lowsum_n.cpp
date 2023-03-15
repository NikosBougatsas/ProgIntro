//O(n) solution

#include "pzhelp"  
  
PROGRAM {  
  int N, s1, s2, b1, b2, min, s;  
  int j = 0;  
  N = READ_INT();  
  
  int a[N];  
  
  for (int i = 0; i < N; i++) {  
    a[i] = READ_INT();  
  }  
  
  s1 = a[0];  
  s2 = a[N-1];  
  b1 = 0;  
  b2 = N - 1;  
  min = s1 + s2;  
  
  while (j < N) {  
    s = s1 + s2;  
    if (abs(s) < abs(min)) min = s;  
    if (s > 0) {  
      b2--;   
      if (b2 == b1) {b2--;}  
      s2 = a[b2];  
    }  
    else if (s < 0) {  
      b1++;  
      if (b1 == b2) {b1++;}  
      s1 = a[b1];  
    }  
    else break;  
    j++;  
  }  
  
  WRITELN(min);  
}
