#include "pzhelp"

PROGRAM {
  int M,N,i,j,k,l,m,n;
  REAL s1=0;
  REAL s2=0;

  N=READ_INT(); M=READ_INT();

  REAL a[N][M],b[N],c[M];

  for (i=0; i<N; i++) {
    for (j=0; j<M; j++) {
      a[i][j]=READ_REAL();
    }
  }

  for (k=0; k<N; k++) {
    b[k]=0;
    for (l=0; l<M; l++) {
      b[k]=b[k]+a[k][l]/M;
    }
    s1=s1+b[k]/N;
  }

  for (m=0; m<M; m++) {
    c[m]=0;
    for (n=0; n<N; n++) {
      c[m]=c[m]+a[n][m]/N;
    }
    s2=s2+c[m]/M;
  }

  WRITELN(FORM(s1,0,3));
  WRITELN(FORM(s2,0,3));
}
