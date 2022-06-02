#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    vector<int> a(n);
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    int q; cin>> q;
    long long sum = 0;
    while(q--){
        int t; cin>>t;
        sum += t;
    }
    cout<<a[sum%n]<<'\n';
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 
    int t; cin>>t;
    while(t--) solve();
}