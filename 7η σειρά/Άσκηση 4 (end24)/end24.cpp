#include "pzhelp"    

PROGRAM {  
  int N, A, B;  
  N = READ_INT();  
  A = N * N;  
  B = A % 100;  
  
  if (B == 24)  
    WRITELN("yes");  
  else  
    WRITELN("no");  
} 
