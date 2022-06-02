#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<long long> vll;
#define pb push_back
#define rep(i,a,b) for(int i = a; i < b; i++)
#define aull(x) x.begin(),x.end()
 
ull mod = 998244353;
 
ull fact(ull n){
    ull ans = 1;
    rep(i,1,n+1){
        ans = (ans*i)%mod;
    }
    return ans;
}
ull invmod(ull n, ull pow){
    if(pow == 0){
        return 1;
    }
    if(pow == 1){
        return n%mod;
    }
    if(pow%2 == 0){
        ull k = invmod(n, pow/2);
        return (k*k)%mod;
    }
    return ((n%mod)*invmod(n, pow-1))%mod;
}
 
void solve(){
    int n; cin>>n;
    vi a(n);
    rep(i,0,n){
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    if(a[n-1] == a[n-2]){
        cout<<fact(n)<<"\n";
        return;
    }
    int cnt = 0;
    rep(i,0,n){
        if(a[i] == a[n-1]-1){
            cnt++;
        }
    }
    if(cnt == 0){
        cout<<0<<"\n";
        return;
    }
    ull ans = fact(n);
    ull b = (ans*invmod(cnt+1, mod-2))%mod;
    cout<<(ans-b+mod)%mod<<"\n";
 
}
 
int main(){
    cin.tie(0); 
    cout.tie(0); 
    ios_base::sync_with_stdio(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 
    int n; cin>>n;
    while(n--){
        solve();
    }
}