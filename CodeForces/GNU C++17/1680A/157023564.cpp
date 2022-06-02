#include <bits/stdc++.h>
#include <algorithm>
typedef long long ll;
#define PB push_back
#define rep(i, a, b) for(int i = a; i<b; i++)
using namespace std;


void solve(){
    int l1, r1, l2, r2; cin>>l1>>r1>>l2>>r2;
    for(int i = l1; i<=r1; i++){
        if(i>=l2 && i<=r2){
            cout<<i<<"\n";
            return;
        }
    }
    for(int i = l2; i<=r2; i++){
        if(i>=l1 && i<=r1){
            cout<<i<<"\n";
            return;
        }
    }
    cout<<l1+l2<<"\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 
    int t; cin>>t;
    while(t--)
        solve();

}
