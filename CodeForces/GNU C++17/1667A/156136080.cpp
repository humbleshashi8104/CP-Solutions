#include <bits/stdc++.h>
#include <algorithm>
typedef long long ll;
#define PB push_back
#define REP(i, a, b) for(int i = a; i<b; i++)
using namespace std;


void solve(){

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 
    int n; cin>>n;
    vector <ll> a (n);
    REP(i, 0, n){
        cin>>a[i];
    }
    ll steps = 1e18;
    REP(i, 0, n){
        ll count = 0;
        ll prev = 0;
        for(int j = i-1; j>=0; j--){
            ll g = prev/a[j] + 1;
            prev = g * a[j];
            count+=g;
        }
        prev = 0;
        for(int j = i+1; j<n; j++){
            ll g = prev/a[j] + 1;
            prev = g * a[j];
            count+=g;
        }
        // cout<<count<<"\n";
        steps = min(steps, count);
    }
    cout<<steps<<"\n";
}
