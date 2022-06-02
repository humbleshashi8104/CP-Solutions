#include <bits/stdc++.h>
typedef long long ll;
#define PB push_back
#define rep(i, a, b) for(int i = a; i<b; i++)
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int> a(n);
    int cnt = 0;
    int in = 0;
    bool c = false;
    rep(i,0,n){
        cin>>a[i];
        if(a[i] == 1){ 
            in = i; 
            cnt++;
            
        }
    }
    if(cnt != 1){
        cout<<"NO\n";
        return;
    }
    rotate(a.begin(), a.begin() + in, a.end());
    rep(i,1,n){
        if (a[i] - a[i-1] > 1) {
            cout << "NO\n";
            return;
        }
    }
    cout<<"YES\n";

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

