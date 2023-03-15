//O(n^2) solution

#include "pzhelp"  
  
PROGRAM {  
  int N, s, k, j, p;  
  long long int count;  
  
  N = READ_INT(); k = READ_INT();  
  
  int a[N];  
  
  for (int i = 0; i < N; i++) {  
    a[i] = READ_INT();  
  }  
  
  count = 0;  
  j = 0;  
  
  for (int p = 0; p < N; p++) {  
    s = 0;  
    j = p;  
    while (j < N) {  
      s+=a[j];  
      if (s <= k) {count++; j++;}  
      else break;  
    }  
  }  
  WRITELN(count);  
} 
