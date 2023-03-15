#include "pzhelp"  
  
PROGRAM {  
  int A, B;  
  
  A = READ_INT(); B = READ_INT();  
  
  if ((A * B < 10000) && (A * B > 999))  
    WRITELN("yes");  
  else  
    WRITELN("no");  
}
