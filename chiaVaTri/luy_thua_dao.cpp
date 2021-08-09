#include<bits/stdc++.h>
using namespace std;
long long mod = 1000000007;

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

long long power(long long n,long long k){
    if(k == 1) return n % mod;
    long long x = power(n, k / 2);
    if(k % 2 == 0) return (x * x % mod);
    return (x * x % mod) * n % mod;
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        long long n,m,k = 0;
        cin >> n;
        m = n;
        while(m){
            k = k*10 + m%10;
            m /= 10;
        }
        cout << power(n,k) << endl;
    }
}
int main(){
    solution();
    return 0;
}