#include "pzhelp"  
  
PROGRAM {  
  int a, b, c;  
  
  a = READ_INT(); b = READ_INT(); c = READ_INT();  
  
  if ((a <= b) && (a <= c)) {  
    WRITELN(a);  
  }  
  else if ((b <= a) && (b <= c)) {  
    WRITELN(b);  
  }  
  else if ((c <= a) && (c <= b)) {  
    WRITELN(c);  
  }
}
