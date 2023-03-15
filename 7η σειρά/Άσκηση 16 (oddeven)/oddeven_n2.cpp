#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e6+5;

int n;
int arr[MAXN];

int main(){
    //Read input
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int ans = 0;
    for (int i = 0; i < n; i++){
        int odd = 0, even = 0;
        for (int j = i; j < n; j++){
            //Find #of odd and even numbers in the subarray [i, j]
            if (arr[j]%2 == 1) odd++;
            else even++;
            if (odd == even) ans = max(ans, j-i+1);
        }
    }
    printf("%d\n", ans);
}
