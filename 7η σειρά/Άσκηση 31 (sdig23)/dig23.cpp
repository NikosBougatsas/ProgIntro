#include "pzhelp"  
  
PROGRAM {  
  int A, B, C, D, E;  
  A = READ_INT(); B = READ_INT();  
  
  C = (A * B) % 10;  
  D=((A * B) % 100 - C)/10;  
  E=((A * B) % 1000 - D)/100;  
  
  WRITE(E); WRITELN(D);  
}
