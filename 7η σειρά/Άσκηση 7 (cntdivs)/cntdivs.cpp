#include "pzhelp"  
  
int gcd(int a, int b) {  
  while (a > 0 && b > 0) {  
    if (a>b) a = a % b; else b = b % a;  
  }  
  return a + b;  
}  
  
PROGRAM {  
  int N, i, j, b, c, count;  
  count = 0;  
  
  N = READ_INT();  
  
  int a[N + 1];  
  
  for (i = 0; i <= N; i++) {  
    a[i] = i;  
  }  
  
  for (j = 2; j <= N; j++) {  
    b = a[j];  
    c = gcd(b, N);  
    if(c > 1) count++;  
  }  
  WRITELN(count);  
}  
