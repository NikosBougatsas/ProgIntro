//it's bugged

#include "pzhelp"  
  
PROGRAM {  
  REAL a, b;  
  a = READ_REAL(); b = READ_REAL();  
  
  if ((a == 0) && (b == 0))  
    WRITELN("trivial");  
  else if ((a == 0) && (b =! 0))  
    WRITELN("impossible");  
  else  
    WRITELN(-b/a);  
}
