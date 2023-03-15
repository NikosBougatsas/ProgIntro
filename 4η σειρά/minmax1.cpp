//Askisi 8

#include "pzhelp"

PROGRAM {
  int M,N,i,j,k,l,m,x,n,u,p;

  N=READ_INT(); M=READ_INT();

  int a[N][M],b[N],c[M];

  for (i=0; i<N; i++) {
    for (j=0; j<M; j++) {
      a[i][j]=READ_INT();
    }
  }

  for (j=0; j<N; j++) {
    b[j]=a[j][0];
    for (k=1; k<M; k++) {
      if (a[j][k]<b[j]) b[j]=a[j][k];
    }
  }

  for (l=0; l<M; l++) {
    c[l]=a[0][l];
    for (m=0; m<N; m++) {
      if (a[m][l]>c[l]) c[l]=a[m][l];
    }
  }

  x=b[0];
  for (n=1; n<N; n++) {
    if (b[n]>x) x=b[n];
  }

  u=c[0];
  for (p=1; p<M; p++) {
    if (c[p]<u) u=c[p];
  }

  WRITELN(u);
  WRITELN(x);

}
