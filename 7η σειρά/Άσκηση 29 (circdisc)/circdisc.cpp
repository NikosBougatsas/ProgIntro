#include "pzhelp"  
  
PROGRAM {  
  REAL A, B, S;  
  A = READ_REAL(); B = READ_REAL();  
  
  S = A * A + B * B;  
  
  if (S>1)  
    WRITELN("outside");  
  else if (S==1)  
    WRITELN("border");  
  else  
    WRITELN("inside");  
}
