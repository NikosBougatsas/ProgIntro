#include "pzhelp"

PROGRAM {
  int N,i,it,b,c;
  char a[21];
  char symbol = 0;
  bool check;
  REAL count=0;

  N=READ_INT();
  SKIP_LINE();

  for (i=0; i<N; i++) {
    it=0;
    while ((symbol=getchar())!='\n') {
      if (it<20) a[it]=symbol;
      it=it+1;
    }

    if (it>20) {
      WRITELN("error"); }
    else if (it==0) {
      WRITELN("empty"); }
    else {
      check=true;
      b=0;
      c=it-1;
      while (b<=c){
        if (a[b]!=a[c]){ check=false; break;}
        b=b+1;
        c=c-1;
      }
    if (check==true) {
      WRITELN("yes"); count++; }
    else {
      WRITELN("no"); }
  }
  }
  WRITELN(FORM(count*100/N,0,3));
}
