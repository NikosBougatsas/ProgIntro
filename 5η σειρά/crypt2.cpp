//Askisi 13

#include <iostream>
#include <string.h>

using namespace std;

void replace(char a[], int b) {

  if ((b>='a') && (b<='z')) {
    putchar(a[b-'a']);
  }
  else if ((b>='A') && (b<='Z')) {
    putchar(a[b-'A']-'a'+'A');
  }
  else {
    putchar(b);
  }
}

int main() {

  int c, original[26],i=0,k=0;
  char rep[26],reverse[26],temp,m,mode[8];
  bool flag=true;
  char alphabet[27]="abcdefghijklmnopqrstuvwxyz";

  for (int i=0; i<26; i++) {
    original[i]=0;
  }

  while ((temp=getchar())!='\n') {
    if ((temp>='a') && (temp<='z') && (original[temp-'a']<1) && (i<26)) {
      rep[i]=temp;
      original[temp-'a']++;
      i++;
    }
    else {
      cout << "error" << endl;
      flag=false;
      break;
    }
  }

  if (flag==true) {
    while (((m=getchar())!='\n') && (k<7)) {
      mode[k]=m;
      k++;
    }
    mode[7] = '\0';

    if (mode[0]=='e') {
      while ((c=getchar())!=EOF) {
        replace(rep,c);
      }
    }
    else if (mode[0]=='d') {
      for (int j=0; j<26; j++) {
        reverse[rep[j]-'a']=alphabet[j];
      }

      while ((c=getchar())!=EOF) {
        replace(reverse,c);
      }
    }
    else {
      cout << "error" << endl;
    }
  }
  return 0;
}

   
