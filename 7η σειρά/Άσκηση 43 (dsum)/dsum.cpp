#include "pzhelp"  
  
PROGRAM {  
  int i, N, A, B;  
  N = READ_INT();  
  i = 10;  
  B = N % 10;  
    
  do {  
    i *= 10;  
    A = (N % i - B) * 10 / i;  
    B += A;  
  } while (N / i > 0);  
  WRITELN(B);  
}  
