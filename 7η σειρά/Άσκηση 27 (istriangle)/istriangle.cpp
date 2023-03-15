#include "pzhelp"  
  
PROGRAM {  
  REAL X, Y, Z;  
  X = READ_REAL(); Y = READ_REAL(); Z = READ_REAL();  
  
  if (((X + Y) > Z && Z > abs(X + Y)) || ((X + Z) > Y && Y > abs(X - Z)) || ((Y + Z) > X && X > abs(Y - Z)))  
    WRITELN("yes");  
  else  
    WRITELN("no");  
}
