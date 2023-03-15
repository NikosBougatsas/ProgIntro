//orisa to array ektos main giati to teleftaio test case sto grader evgaze segmentation fault
#include "pzhelp"  
  
int a[4000000];  
  
PROGRAM {  
  int N,i,s=0,j=0,k,x=0;  
  
  N=READ_INT();  
  
  for (i=0; i<N; i++) {  
    a[i]=READ_INT();  
  }  
  
  k=j+1;  
  
  while (k<N) {  
    x=a[j]+a[k]+k-j;  
    if (a[k]-a[j]>k-j) j=k;  
    if (x>s) s=x;  
    k++;  
  }  
  
  WRITELN(s);  
}
