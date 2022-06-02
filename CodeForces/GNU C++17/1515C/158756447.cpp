#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<long long> vll;
#define pb push_back
#define rep(i,a,b) for(int i = a; i < b; i++)
#define all(x) x.begin(),x.end()

void solve(){
    int m,n,x; cin>>m>>n>>x;
    multiset <pair<ll, int> > ans;
    vi a (m);
    vi b (m);
    rep(i,0,n){
        ans.insert(make_pair(0, i));
    }
    rep(i,0,m){
        cin>>a[i];
    }
    rep(i,0,m){
        ll g = ans.begin()->first;
        ll in = ans.begin()->second;
        
        b[i] = in;
        ans.erase(ans.begin());
        g+=a[i];
        ans.insert(make_pair(g, in));
    }
    for(multiset<pair<ll, int> > :: iterator it = ans.begin(); it!=--ans.end();){
        if((++it)->first - it->first>x){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
    rep(i,0,m){
        cout<<b[i]+1<<" ";
    }
    cout<<"\n";
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

