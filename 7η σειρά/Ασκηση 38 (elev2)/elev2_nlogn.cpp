//O(nlogn) solution

#include "pzhelp"  
#include <iostream>  
  
int partition (int a[], int first, int last) {  
  int x = a[(first + last)/2];  
  int i = first, j = last;  
  
  while (true) {  
    while (a[i] < x) i++;  
    while (a[j] > x) j--;  
    if (i >= j) break;  
    swap(a[i], a[j]); i++; j--;  
  }  
  return j;  
}  
  
void quicksort (int a[], int first, int last) {  
  int i;  
  
  if (first >= last) return;  
  
  i=partition(a, first, last);  
  quicksort(a, first, i);  
  quicksort(a, i+1, last);  
}  
  
using namespace std;  
  
int main() {  
  int N, B, count = 0;  
  
  cin >> N >> B;  
  
  int a[N];  
  
  for (int i = 0; i < N; i++) {  
    cin >> a[i];  
  }  
  
  quicksort(a, 0, N-1);  
  
  int p = 0,k = N - 1;  
  
  while (p <= k) {  
    if (a[p] + a[k] <= B) {  
      k--; p++;  
    }  
    else {k--;}  
    count++;  
  }  
  
  cout << count << endl;  
  
  return 0;
}
