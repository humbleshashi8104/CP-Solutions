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
    int k; cin>>k;
    vi a (n);
    rep(i,0,n){
        cin>>a[i];
    }
    vi b,c;
    sort(a.begin(), a.end());
    int cnt = 1;
    rep(i,n-2*k,n-k){
        b.pb(a[i]);
        c.pb(a[i+k]);
    }
    int score = 0;
    rep(i,0,b.size()){
        int l = b[i]/c[i];
        score+=l;
    }

    rep(i,0,n-2*k){
        score+=a[i];
    }
    cout<<score<<"\n";
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

