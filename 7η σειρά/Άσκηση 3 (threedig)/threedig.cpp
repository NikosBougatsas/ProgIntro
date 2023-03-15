#include "pzhelp"  
  
PROGRAM {  
  int N;  
  N=READ_INT();  
  
  if ((N<1000) && (N>99))  
    WRITELN("yes");  
  else  
    WRITELN("no");  
}  
