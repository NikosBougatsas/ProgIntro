#include "pzhelp"  
  
PROGRAM {  
  int A, B;  
  A = READ_INT(); B = READ_INT();  
  
  if (((A % 42 == 0) && (B % 17 == 0)) || ((A % 17 == 0) && (B % 42 == 0)))  
    WRITELN("yes");  
  else  
    WRITELN("no");  
}
