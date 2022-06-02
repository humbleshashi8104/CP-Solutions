#include <bits/stdc++.h>
typedef long long ll;
#define PB push_back
#define rep(i, a, b) for(int i = a; i<b; i++)
using namespace std;
 
void solve(){
    int n; cin>>n;
    vector <int> a(n);
    rep(i,0,n){   
        cin>>a[i];
    }
    if(a[0] < a[n-1]){
        cout<<"YES\n";
        return;
    }
    cout<<"NO\n";

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

//1 2 3 1 3 5 min(i+1, n-i, a[i]) = 0
//1 2 3 4 5 6
//6 5 4 3 2 1 