#include <bits/stdc++.h>
#include <algorithm>
typedef long long ll;
typedef long long ll;
#define PB push_back
#define REP(i, a, b) for(int i = a; i<b; i++)
using namespace std;
 
 
void solve(){
    int n, q;
    cin>>n>>q;
    vector <int> a(n);
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    vector <long long> pre (n);
    long long sum = 0;
    for(int i = 0; i<n; i++){
        sum+=a[n-i-1];
        pre[i] = sum;
    }
    while(q--){
        long long t; cin>>t;
        long long index = lower_bound(pre.begin(), pre.end(), t) - pre.begin() + 1;
        if(index > n){
            cout<<-1<<"\n";
            continue;
        }
        cout<<index<<"\n";
    }
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 
    int t; cin>>t;
    while(t--){
        solve();
    }
}