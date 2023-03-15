#include "pzhelp"  
  
PROGRAM {  
  int N, i, j, k, b;  
  int count = 0;  
  
  N = READ_INT();  
  
  int a[N + 1];  
  
  if (N == 1)  
    WRITELN(count);  
  else {  
    count = 1;  
  
  for(i = 0; i <= N; i++){  
    a[i] = i;  
  }  
  i = 2;  
  while (i <= N) {  
    if (a[i] != 0) {  
      k = a[i];  
      for (j = k; j <= N/k; j++) {  
        a[j * k] = 0;  
      }  
    }  
      i++;  
  }  
  
  for (b = 0; b <= N; b++) {  
    if (a[b] != 0) count++;  
  }  
  WRITELN(count - 2);  
  }  
}
