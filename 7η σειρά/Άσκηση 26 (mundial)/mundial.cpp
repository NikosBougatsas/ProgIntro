#include "pzhelp"  
  
PROGRAM {  
  int N;  
  N = READ_INT();  
  
  if (((N - 1930) % 4 == 0) && (N != 1942) && (N != 1946) && (N >= 1930))  
    WRITELN("yes");  
  else  
    WRITELN("no");  
}
