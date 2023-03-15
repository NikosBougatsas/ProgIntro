#include "pzhelp"  
  
PROGRAM {  
  int N, A, count;  
  N = READ_INT();  
  count = 0;  
  
  do {  
    A = N % 10;  
    N = N / 10;  
    if (A == 7) count++;  
  } while (N > 0);  
  WRITELN(count);  
}
