#include <bits/stdc++.h>
typedef long long ll;
#define PB push_back
#define rep(i, a, b) for(int i = a; i<b; i++)
using namespace std;

void solve(){
    int n; cin>>n;
    vector <int> a (n);
    map<int, int> m;
    rep(i,0,n){
        cin>>a[i];
        m[a[i]]++;
    }
    int s = 0, d = 0;
    for(map<int, int> :: iterator it = m.begin(); it!=m.end(); it++){
        if(it->second == 1){
            s++;
        }
        else{
            d++;
        }
    }
    cout<<d + ((s+1)/2)<<"\n";
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

