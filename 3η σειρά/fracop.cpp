#include "pzhelp"

PROGRAM {
  int a,b,c,d,e,f,g,h,N,i;
  char operation;
  bool A=true;
    N=READ_INT();
    FOR(i,1 TO N) {
      SKIP_LINE();
      operation=getchar();
      a=READ_INT(); b=READ_INT(); c=READ_INT(); d=READ_INT();
      if ((b==0) || (d==0))
      {
        WRITELN("error");
      }
      else
      {
        switch (operation) {
          case '+':
           e=(a*d+b*c); f=b*d;
          break;
          case '-':
           e=(a*d-b*c); f=b*d;
          break;
          case '*':
           e=a*c; f=b*d;
           break;
          case '/':
            if(c==0)
            {
              WRITELN("error"); A=false;
            }
            else
            {
              e=a*d; f=b*c;
            }
             break;
        }
        if (A==true) {
        g=abs(e%f);
        h=abs(f);
      while (g>0 && h>0)
        if (g>h) g=g%h; else h=h%g;
      if (e/f==0 && ((f<0 && e>0) || (f>0 && e<0)))
        WRITELN("-0",abs((e%f)/(g+h)),abs(f/(g+h)));
      else
        WRITELN(e/f,abs((e%f)/(g+h)),abs(f/(g+h)));
        }
      }
    }
}
