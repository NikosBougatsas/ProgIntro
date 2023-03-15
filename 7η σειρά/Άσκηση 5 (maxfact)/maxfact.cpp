#include "pzhelp"  
  
PROGRAM {  
  int p , N, count, q;  
  N = READ_INT();  
  q = 1;  
  p = 1;  
  count = 0;  
    while (p <= N)  
    {  
      count++;  
      p = p * q;  
      q++;  
    }  
  WRITELN(count - 1);  
} 
