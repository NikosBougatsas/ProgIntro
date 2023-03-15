#include "pzhelp"  
  
PROGRAM {  
  int N, A, B;  
  N = READ_INT();  
  
  A = N % 100;  
  B = A / 10 + A % 10;  
  
  WRITELN(B);  
}
