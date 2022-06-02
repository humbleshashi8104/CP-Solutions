#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<long long> vll;
#define pb push_back
#define rep(i,a,b) for(int i = a; i < b; i++)
#define all(x) x.begin(),x.end()

vll dp(4001, -1);

long long solve(int n, int a, int b, int c){
    if(n == 0) return 0;
    if(n <0) return -1e18;
    if(dp[n]!=-1) return dp[n];
    ll x = 1 + solve(n-a, a, b, c);
    ll y = 1 + solve(n-b, a, b, c);
    ll z = 1 + solve(n-c, a, b, c);

    dp[n] = max(x,max(y,z));
    return dp[n];

}   
 
int main(){
    cin.tie(0); 
    cout.tie(0); 
    ios_base::sync_with_stdio(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 
    int n, a, b, c; cin>>n>>a>>b>>c;
    ll ans = solve(n,a,b,c);
    if(ans<0){
        cout<<0<<"\n";
        return 0;
    }
    cout<<ans<<"\n";
}

