#include "pzhelp"  
  
PROGRAM {  
  int M, N;  
  M = READ_INT(); N = READ_INT();  
  
  if (M >= N)  
    WRITELN(M);  
  else  
    WRITELN(N);  
}
