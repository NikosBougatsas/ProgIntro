//best I could do...

#include "pzhelp"  
  
PROGRAM {  
  int N;  
  int i, j, k, l, m, b[1000], n, s, count;  
  N = READ_INT();  
  long long int a[N];  
  
  for (i = 0; i < N; i++) {  
    a[i] = READ_INT();  
  }  
  
  for (n = 0; n <1 000; n++) {  
    b[n] = pow(n, 3);  
  }  
  
  for (k = 0; k < N; k++) {  
    s = 0;  
    count = 0;  
    j = 0;  
    while (j <= 500) {  
      for (l = j; l <= 500; l++) {  
        for (m = l; m <= 500; m++) {  
          s = b[j] + b[l] +b [m];  
          if (s == a[k]) {count++;}  
          else if (s > a[k]) break;  
        }  
      }  
      j++;  
    }  
    WRITELN(count);  
  }  
}
