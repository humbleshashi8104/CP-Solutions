#include <bits/stdc++.h>
#include <algorithm>
typedef long long ll;
typedef long long ll;
#define PB push_back
#define REP(i, a, b) for(int i = a; i<b; i++)
using namespace std;

vector <int> palis;
long long dp [(int)(4e4+1)][500];
long long mod  = 1e9 + 7;

bool isPali(int a){
    int k = 0;
    int g = a;
    while(a>0){
        k = k*10 + a%10;
        a/=10;
    }
    return (k == g);
}

int solve(int n, int index){
    if(index == palis.size()){
        return 0;
    }
    if(n == 0){
        return 1;
    }
    if(dp[n][index] != -1)
        return dp[n][index];
    long long k = 0;
    if(palis[index]<=n){
        k = solve(n-palis[index], index)%mod;
    }
    k = k % mod;
    k = (k + solve(n, index+1)%mod)%mod;
    dp[n][index] = k;
    return dp[n][index];
}

// int solve(int n){
//     vector<long long> dp(n+1, 0);
//     dp[0] = 1;
//     for (int i = 0; i < palis.size() ; i++){
//         int row = palis[i];
//         for (int col = 1; col < n + 1; col++){
//             if (col >= row)
//                 dp[col] = (dp[col] + dp[col - row])%mod;
//         }
//     }
//     return(dp[n]);
// }

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 
    for(int i = 1; i<=4*1e4; i++){
        if(isPali(i)){
            palis.push_back(i);
        }
    }
    memset(dp,-1,sizeof(dp));
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        cout<<solve(n, 0)<<"\n";
    }
}
