#include <bits/stdc++.h>
#include <algorithm>
typedef long long ll;
typedef long long ll;
#define PB push_back
#define rep(i, a, b) for(int i = a; i<b; i++)
using namespace std;


void solve(){
    int n, k; cin>>n>>k;
    string s; cin>>s;
    if(n == k){
        cout<<1<<"\n";
        return;
    }
    vector<int> freq (26, 0);
    rep(i, 0, n){
        freq[s[i] - 'a']++;
    }
    int total_pairs = 0;
    rep(i, 0, 26){
        int g = freq[i]/2;
        total_pairs += g;
    }
    int l = total_pairs/k;
    if(total_pairs*2 == n){
        int g= total_pairs/k;
        // cout<<total_pairs<<"\n";
        int l = n - 2*g*k;
        // cout<<l<<"\n";
        if(k <= l){
            cout<<2*g+1<<"\n";
        }
        else{
            if(g == 0){
                cout<<1<<"\n";
                return;
            }
            cout<<2*g<<"\n";

        }
        return;
    }
    // cout<<(double)total_pairs/k<<"\n";
    // if(n - 2*total_pairs != 0){

    // }
    // cout<<l<<"\n";
    // cout<<2*l*k<<"\n";
    if(n - 2*l*k >= k){
        cout<<2*l+1<<"\n";
    }
    else{
        cout<<2*l<<"\n";
    }
    // cout<<(l+1)*(k) - total_pairs <<"\n";
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
