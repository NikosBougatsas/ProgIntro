#include "pzhelp"

PROGRAM {
  int N,A[8],b,c,d,e,f,g,h,i,k,l;
  long int m,j,a[10];

  N=READ_INT();

  for (k=0; k<10; k++) {
    a[k]=pow(k,N);
  }

  for (l=0; l<8; l++) {
    A[l]=pow(10,l);
  }

  for (b=0; b<10; b++) {
    for (c=0; c<10; c++) {
      for (d=0; d<10; d++) {
        for (e=0; e<10; e++) {
          for (f=0; f<10; f++) {
            for (g=0; g<10; g++) {
              for (h=0; h<10; h++) {
                for (i=0; i<10; i++) {
                  j=b*A[7]+c*A[6]+d*A[5]+e*A[4]+f*A[3]+g*A[2]+h*A[1]+i*A[0];
                  m=a[b]+a[c]+a[d]+a[e]+a[f]+a[g]+a[h]+a[i];
                  if (j==m) WRITELN(j);
                }
              }
            }
          }
        }
      }
    }
  }
}
