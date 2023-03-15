#include "pzhelp"  
  
PROGRAM {  
  int M, N;  
  M = READ_INT(); N = READ_INT();  
  
  if ((M + N) % 100 == 42)  
    WRITELN("yes");  
  else  
    WRITELN("no");  
}  
