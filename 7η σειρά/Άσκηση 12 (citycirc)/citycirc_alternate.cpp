//this one also O(n), but for some unknown reason some test cases don't work on grader while they do on PuTTy

#include "pzhelp"
  
PROGRAM {  
  int N, i, k, s, count;  
  bool check;  
  
  N = READ_INT();  
  
  int b[N], j;  
  
  for (i = 0; i < N; i++) {  
    b[i] = READ_INT();  
  }  
  
  for (k = 0; k < N; k++) {  
    check = true;  
    count = 0;  
    s = b[k];  
    j = k + 1;  
    while (count < N) {  
      s = s + b[j];  
      if (j == N - 1) {  
        j = 0; }  
      else j++;  
  
      if (s < 0) {check = false; break;}  
      count++;  
    }  
    if (check == true) break;  
  }  
  
  if (check == true)  
    WRITELN(k + 1);  
  else  
    WRITELN(0);  
}
