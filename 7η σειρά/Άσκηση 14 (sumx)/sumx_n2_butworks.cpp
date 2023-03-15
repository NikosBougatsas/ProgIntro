//O(n^2) solution but works

#include "pzhelp"  
  
PROGRAM {  
  int i, it, temp, j, N, k, s, x, count = 0;  
  
  N = READ_INT(); x = READ_INT();  
  
  int a[N];  
  k = 0;  
  it = 0;  
  
  while (it < N) {  
    temp = READ_INT();  
    if (temp <= x) {a[k] = temp; k++;}  
    it++;  
  }  
  
  for (i = 0; i<k; i++) {  
    for (j = i+1; j<k; j++) {  
        s = 0;  
        s = a[i] + a[j];  
        if (s == x) count++;  
    }  
  }  
  
  WRITELN(count);
}  
