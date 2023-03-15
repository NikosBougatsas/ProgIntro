//bugged

#include "pzhelp"  
  
PROGRAM {  
  int A, B, N, D;  
  N = READ_INT(); D = READ_INT();  
  
  A = N / 100000;  
  B = N % 10;  
  
  if ((A == D) && (B == D))  
    WRITELN("yes");  
  else  
    WRITELN("no");  
}
