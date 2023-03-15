#include "pzhelp"  
  
PROGRAM {  
  int count, N;  
  N = READ_INT();  
  count = 1;  
  
  while (N >= 10)  
  {  
    N = N / 10;  
    count++;  
  }  
  
  if (count % 2 == 0)  
    WRITELN("yes");  
  else  
    WRITELN("no");  
}
