#include <iostream>

using namespace std;

void wordtoline(char a[], char b[], int begin, int N) {
  for (int i=0; i<N; i++) {
    b[begin+i]=a[i];
  }
}

void spacing(char a[], int max, int count, int spaces) {
  int rem=max-count,i=0,t=rem/spaces,d=1;
  int modd=rem%spaces, temp=t;

  while (i<count) {
    if (a[i]==' ') {
      if (modd>spaces-d) t++;
      for (int k=0; k<=t; k++) {
        putchar(' ');
      }
      t=temp;
      d++;
      rem--;
    }
    else {
      putchar(a[i]);
    }
    i++;
  }
}

int main() {
  int c,count=0,MAX=60,n=0,spaces=0;
  char word[21],line[MAX];
  bool flag=true;

  while ((c=getchar())!=EOF) {
    if ((c!=' ') && (c!='\n')) {
      word[n]=c;
      n++;
      flag=true;
    }
    else {
      if (flag) {
        if (n+count+1>MAX) {
          spaces--;
          spacing(line, MAX, count, spaces);
          cout << endl;
          wordtoline(word, line, 0, n);
          count=n;
          spaces=1;
        }
        else if ((n+count+1)==MAX) {
          line[count]=' ';
          wordtoline(word, line, count+1, n);

          for (int i=0; i<MAX; i++) {
            putchar(line[i]);
          }
          cout << endl;
          count=0;
          spaces=0;
        }
        else {
          if (count>0) {
            line[count]=' ';
            wordtoline(word, line, count+1, n);
            count+=(n+1);
          }
          else if (count==0) {
            wordtoline(word, line, 0, n);
            count+=n;
          }
          spaces++;
        }
        n=0;
        flag=false;
      }
    }
  }
  for (int i=0; i<count; i++) {
    putchar(line[i]);
  }
  cout << endl;

  return 0;
}

