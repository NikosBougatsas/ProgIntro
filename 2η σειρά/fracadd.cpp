#include "pzhelp"

PROGRAM {
  int a,b;
  a=READ_INT(); b=READ_INT();
  int c,d;
  c=READ_INT(); d=READ_INT();

  WRITELN(a*d+b*c, b*d);
}
