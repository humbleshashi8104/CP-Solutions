#include <bits/stdc++.h>
typedef long long ll;
#define PB push_back
#define rep(i, a, b) for(int i = a; i<b; i++)
using namespace std;
 
void solve(){
    int n; cin>>n;
    vector<int> a (n); 
    int ans = -1;
    rep(i,0,n){
        cin>>a[i];
    }
    rep(i,0,n){
        if(a[i]!=i){
            if(ans == -1){
                ans = a[i];
            }
            else{
                ans = ans&a[i];
            }
        }
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
    int n; cin>>n;
    while(n--){
        solve();
    }
}