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
    vector <ull> a (n);
    vector <ull> pre(n);
    rep(i,0,n){
        cin>>a[i];
    }
    ull x = a[0];
    rep(i,1,n){
        pre[i-1] = x;
        x = x^a[i];
    }
    pre[n-1] = x;
    rep(i,0,n){
        rep(j,i+1,n){
            ull r = pre[i];
            ull t = pre[j]^pre[i];
            ull y = x^pre[j];
            if(r==t && t==y){
                // cout<<i<<" "<<j<<"\n";
                cout<<"YES\n";
                return;
            }
        }
    }
    rep(i,0,n){
        ull r = pre[i];
        ull t = x^pre[i];
        if(r==t){
            // cout<<i<<" "<<"\n";
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
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

