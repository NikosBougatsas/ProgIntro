#include "pzhelp"  
  
PROGRAM {  
  int N, i, count;  
  N = READ_INT();  
  
  count = 0;  
  i = 1;  
  
  do {  
    i = 2 * i;  
    count++;  
  }  while (N % i == 0);  
  WRITELN(count - 1);  
}
