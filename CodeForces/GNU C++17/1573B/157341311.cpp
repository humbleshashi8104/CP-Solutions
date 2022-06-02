#include <bits/stdc++.h>
#include <algorithm>
typedef long long ll;
#define PB push_back
#define rep(i, a, b) for(int i = a; i<b; i++)
using namespace std;


void solve(){
    int n; cin>>n;
    map<long long, int> m;
    rep(i, 0, n){
        ll t; cin>>t;
        for(int j = t; j<=2*n; j+=2){
            if(m[j]==0){
                m[j] = i+1;
                continue;
            }
            break;
        }
    }
    vector <long long> b (n);
    rep(i, 0, n){
        cin>>b[i];
    }
    int ans = 1e9;
    rep(i, 0, n){
        ans = min(ans, i+m[b[i]-1]-1);
    }
    cout<<ans<<"\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 
    int t; cin>>t;
    while(t--)
        solve();

}
