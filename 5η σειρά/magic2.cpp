#include "pzhelp"
#include "iostream"

using namespace std;

int main() {
  int N,in,sum;
  bool check=true;

  cin >> N;

  int a[N][N],b[N*N];

  for (int i=0; i<N*N; i++) {
    b[i]=0;
  }

  for (int i=0; i<N; i++) {
    for (int j=0; j<N; j++) {
      cin >> a[i][j];
      in=a[i][j];
      b[in]++;
      if (b[in]>1) check=false;
    }
  }

  if (check==false) {
    cout << "no" << endl;
  }
  else {
    sum=N*(N*N-1)/2;

    int sum1[N],sum2[N],sum3=0,sum4=0;

    for (int i=0; i<N; i++) {
      sum1[i]=0; sum2[i]=0;
      for (int j=0; j<N; j++) {
        sum1[i]=sum1[i]+a[i][j];
        sum2[i]=sum2[i]+a[j][i];
      }

      if ((sum1[i]!=sum) || (sum2[i]!=sum)) {
        check=false; break;
      }
    }

    if (check==false) {
      cout << "no" << endl;
    }
    else {
      for (int i=0; i<N; i++) {
        sum3=sum3+a[i][i];
        sum4=sum4+a[i][N-i-1];
      }

      if ((sum3!=sum) || (sum4!=sum)) {
        check=false;
      }

      if (check==false) {
        cout << "no" << endl;
      }
      else {
        cout << "yes" << endl;
      }
    }
  }

  return 0;
}
