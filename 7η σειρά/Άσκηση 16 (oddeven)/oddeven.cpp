//Opws lythike sto frontistiriako mathima

#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e6+5;

int n;
int arr[MAXN], psa[MAXN + 1], m[2 * MAXN]; //m[i+MAXN] -> first occurence of i, initialised to 0

int main(){
    scanf("%d", &n);
    m[MAXN] = 0;
    int ans = 0;
    for (int i = 1; i <= n; i++){
        int temp;
        scanf("%d", &temp); //Read input without array
        if (temp%2 == 0) arr[i] = 1;
        else arr[i] = -1;
        psa[i] = psa[i-1] + arr[i]; //Create prefix sum array for modified array
        if (m[psa[i] + MAXN] == 0 && psa[i] != 0){ // if I haven't seen psa[i] before
            m[psa[i] + MAXN] = i; //first occurence of psa[i] is i
        }
        else { //if I have seen psa[i] before
            ans = max(ans, i - m[psa[i] + MAXN]); //take largest possible subarray with same prefix sum
        }
    }
    printf("%d\n", ans);
}
