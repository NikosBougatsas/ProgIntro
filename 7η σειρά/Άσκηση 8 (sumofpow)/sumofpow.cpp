#include "pzhelp"   
  
PROGRAM {  
  int a[23], b[15], c[10];  
  int N, j, k, l, m, n, p, r;  
  int count=0;  
  
  N = READ_INT();  
  
  int d[N + 1];  
  
  for (int z = 0; z <= N; z++) {  
    d[z] = 0;  
  }  
  
  for (n = 0; n < 23; n++) {  
    a[n] = pow(2, n);  
  }  
  
  for (p = 0; p < 15; p++) {  
    b[p] = pow(3, p);  
  }  
  
  for (r = 0; r < 10; r++) {  
    c[r] = pow(5, r);  
  }  
  
  for (j = 0; j<23; j++) {  
    for (k = 0; k<15; k++) {  
      for (l = 0; l<10; l++) {  
        m = a[j] + b[k] + c[l];  
        if (m > N) break;  
        else if (m <=N && d[m] == 0) {  
          d[m]++;  
          count++;  
        }  
      }  
    }  
  }  
  
  WRITELN(count);  
  
}
