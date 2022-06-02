#include <bits/stdc++.h>
#include <algorithm>
typedef long long ll;
typedef long long ll;
#define PB push_back
#define rep(i, a, b) for(int i = a; i<b; i++)
using namespace std;

void solve(){
    int n, k; cin>>n>>k;
    map <int, multiset<long long> > m;
    rep(i,0,n){
        long long t; cin>>t;
        if(t%k != 0){
            m[t%k].insert(t);
        }
    }
    long long ans = 0;
    for(map <int, multiset<long long> > :: iterator it = m.begin(); it!=m.end(); it++){
        long long n = 0;
        long long t = 0;
        for(multiset<long long> :: iterator i = --(it->second).end();; i--){
            long long g = (t + *i)/k;
            g = (g+1)*k;
            n = g;
            t = g - *i;
            if(i==(it->second).begin()){
                break;
            }
        }  
        ans = max(ans, t+1);
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