//Askisi 12

#include <iostream>
#include <cstring>

using namespace std;

void replace (char a[26], int b) {

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
  int c,original[26],i=0;
  char rep[26],temp;
  bool flag=true;

  for (int j=0; j<26; j++) {
    original[j]=0;
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
    while ((c=getchar())!=EOF) {
      replace(rep,c);
    }
  }
  return 0;
}
