//O(n) solution

#include "pzhelp"  
  
PROGRAM {  
  int N,s1,s2,max=0;  
  N=READ_INT();  
  
  int a[N],k=0,j=N-1;  
  
  for (int i=0; i<N; i++) {  
    a[i]=READ_INT();  
  }  
  
  s1=a[k];  
  s2=a[j];  
  
  while (k<j) {  
    if (s1>s2) {  
      j--; s2=s2+a[j];  
    }  
    else if (s2>s1) {  
      k++; s1=s1+a[k];  
    }  
    else if ((s1==s2) && (s1>max)) {  
      max=s1;  
      k++;  
      s1=s1+a[k];  
    }  
  }  
  
  WRITELN(max);  
}
