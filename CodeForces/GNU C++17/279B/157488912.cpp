#include <bits/stdc++.h>
#include <algorithm>
typedef long long ll;
typedef long long ll;
#define PB push_back
#define rep(i, a, b) for(int i = a; i<b; i++)
using namespace std;


void solve(){
    int n, t; cin>>n>>t;
    vector <int> a(n);
    rep(i, 0, n){
        cin>>a[i];
    }
    int back = 0; 
    ll sum = 0;
    ll maxu = 0;
    rep(i, 0, n){
        sum+=a[i];
        if(sum > t){
            // cout<<"YES ";
            while(sum>t){
                sum-=a[back];
                back++;
            }
            // cout<<back<<" ";
        }
        maxu = max((ll)i-back+1, maxu);
        // cout<<maxu<<"\n";
    }
    cout<<maxu<<"\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 
    // int t; cin>>t;
    // while(t--)
        solve();
}
