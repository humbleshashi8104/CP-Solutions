#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<long long> vll;
#define pb push_back
#define rep(i,a,b) for(int i = a; i < b; i++)
#define all(x) x.begin(),x.end()

ll mod = 998244353;

ll fact(ll n, ll t){
    ll ans = 1;
    rep(i,1,n+1){
        if(i == t) continue;
        ans = (ans*i)%mod;
    }
    return ans;
}


void solve(){
    int n; cin>>n;
    vi a(n);
    rep(i,0,n){
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    if(a[n-1] == a[n-2]){
        cout<<fact(n, 1)<<"\n";
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
    ll ans = fact(n, 1);
    cout<<(ans-fact(n, cnt+1) + mod)%mod<<"\n";

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

