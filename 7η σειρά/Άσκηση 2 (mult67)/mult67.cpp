#include "pzhelp"  
  
PROGRAM {  
  int N,A,B;  
  N=READ_INT();  
  A=N%7;  
  B=N%6;  
  if ((A==0) && (B!=0))  
    WRITELN("yes");  
  else  
    WRITELN("no");  
}  
