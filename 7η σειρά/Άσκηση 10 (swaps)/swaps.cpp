#include "pzhelp"  
  
PROGRAM {  
  int N, i, count = 0, countall = 0, temp1, temp2, k = 0;  
  N = READ_INT();  
  int a[N], d[N];  
  
  for (i = 0; i < N; i++) {  
    a[i] = READ_INT();  
    if (a[i] < 0) {  
      d[k] = i;  
      k++;  
    }  
  }  
  
  int s = 0;  
  
  while (true) {  
    for (i = s; i < k; i++) {  
      if (d[i] != 0 && ((a[d[i]-1] > 0) && (a[d[i]] < 0))) {  
        temp1 = a[d[i] - 1];  
        temp2 = a[d[i]];  
        a[d[i] - 1] = temp2;  
        a[d[i]] = temp1;  
        count++;  
        d[i]--;  
      }  
    }  
    if (d[0] == 0) s = 1;  
    if (count == 0) break;  
    else {  
      countall += count; count = 0;  
    }  
  }  
  
  WRITELN(countall);  
  WRITELN(a[0]);  
  WRITELN(a[N - 1]);  
} 
