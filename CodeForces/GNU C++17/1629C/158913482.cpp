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
    int n; cin>>n;
    vi a(n);
    rep(i,0,n){
        cin>>a[i];
    }    
    map <int, int> f;
    rep(i,0,n){
        f[a[i]]++;
    }
    set<int> present;
    vi ans;
    int mex  = 0;
    rep(i,0,n){
        present.insert(a[i]);
        while(present.find(mex) != present.end()){
            mex++;
        }
        f[a[i]]--;
        if(f[mex] == 0){
            ans.pb(mex);
            mex = 0;
            present.clear();
        }
    }   
    cout<<ans.size()<<"\n";
    rep(i,0,ans.size()){
        cout<<ans[i]<<' ';
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

