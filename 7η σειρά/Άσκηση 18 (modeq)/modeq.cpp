#include "pzhelp"  
  
PROGRAM {  
  int A, B, C, a, b, c;  
  A = READ_INT(); B = READ_INT(); C = READ_INT();  
  
  a = A % 42; b = B % 42; c = C % 42;  
  
  if ((a == b) && (b == c))  
    WRITELN(c);  
  else  
    WRITELN("no");  
}
