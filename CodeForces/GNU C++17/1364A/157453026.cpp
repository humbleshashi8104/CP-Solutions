#include <bits/stdc++.h>
#include <algorithm>
typedef long long ll;
typedef long long ll;
#define PB push_back
#define rep(i, a, b) for(int i = a; i<b; i++)
using namespace std;

void solve(){
    int n, x; cin>>n>>x;
    vector <int> a(n);
    long long sum = 0;
    bool all = true;
    rep(i,0,n){
        cin>>a[i];
        all = all && (!(a[i]%x));
        sum+=a[i];
    }
    // cout<<all<<"\n";
    if(all){
        cout<<-1<<"\n";
        return;
    }
    if(sum%x != 0){
        cout<<n<<"\n";
        return;
    }
    int g = 0;
    rep(i, 0, n){
        if(a[i]%x != 0){
            g = i+1;
            break;
        }
    }
    int t = 0;
    for(int i = n-1; i>=0; i--){
        if(a[i]%x != 0){
            t = n-i;
            break;
        }
    }
    // cout<<t<<" "<<g<<"\n";
    cout<<n - min(t, g)<<"\n";
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