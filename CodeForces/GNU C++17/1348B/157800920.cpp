#include <bits/stdc++.h>
typedef long long ll;
#define PB push_back
#define rep(i, a, b) for(int i = a; i<b; i++)
using namespace std;

void solve(){
    int n, k; cin>>n>>k;
    set <int> s; 
    rep(i,0,n){
        int t; cin>>t;
        s.insert(t);
    }
    if(s.size()>k){
        cout<<-1<<"\n";
        return;
    }
    cout<<n*k<<"\n";
    rep(i,0,n){
        for(set<int> :: iterator it = s.begin(); it!=s.end(); it++){
            cout<<*it<<" ";
        }
        rep(i,0,k-s.size()){
            cout<<1<<" ";
        }
    }
    cout<<"\n";
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 
    int n; cin>>n;
    while(n--){
        solve();
    }
}





















// ᴘᴠᴛʀ

