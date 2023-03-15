#include "pzhelp"  
  
PROGRAM {  
  int M, N;  
  M = READ_INT(); N = READ_INT();  
  
  if ((M % 2 == 0) && (N % 2 == 0))  
    WRITELN(2);  
  else if (((M % 2 == 0) && (N % 2 != 0)) || (( M % 2 != 0) && (N % 2 == 0)))  
    WRITELN(1);  
  else  
    WRITELN(0);  
}
