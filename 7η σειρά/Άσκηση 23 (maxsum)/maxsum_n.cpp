//O(n) solution

#include "pzhelp"  
  
PROGRAM {  
  int N, i;  
  
  N =READ_INT();  
  
  int a[N];  
  int x = 0,s = 0,j = 0;  
  
  for (i = 0; i < N; i++) {  
    a[i] = READ_INT();  
  }  
  
  while (j < N) {  
    s = s + a[j];  
    if (s <= 0) s = 0;  
    if (s > x) x = s;  
    j++;  
  }  
  
  WRITELN(x);  
}  
