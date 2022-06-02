#include <bits/stdc++.h>
#include <algorithm>
typedef long long ll;
typedef long long ll;
#define PB push_back
#define REP(i, a, b) for(int i = a; i<b; i++)
using namespace std;
 
// long long solve(int n, int a, int b, int c, long long pieces, vector <long long> &dp){
//     if(n < 0)
//         return -(0x3F3F3F3F3F3F3F3FLL);
//     if(n == 0)
//         return pieces;
//     if(dp[n] != -1){
//         return dp[n];
//     }
//     dp[n] = max(max(solve(n-a, a, b, c, pieces+1, dp), solve(n-b, a, b, c, pieces+1, dp)), solve(n-c, a, b, c, pieces+1, dp));
//     return dp[n];
// }
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 
    int n; cin>>n;
    vector <int> odd;
    vector <int> even;
    for(int i = 0; i<n; i++){
        int g; cin>>g;
        if(g%2 == 0){
            even.PB(i);
        }
        else{
            odd.PB(i);
        }
    }
    if(odd.size() > even.size()){
        cout<<even[0]+1<<"\n";
    }
    else{
        cout<<odd[0]+1<<"\n";
    }
}