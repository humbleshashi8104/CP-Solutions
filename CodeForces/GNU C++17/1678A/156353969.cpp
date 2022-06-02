#include <bits/stdc++.h>
#include <algorithm>
typedef long long ll;
typedef long long ll;
#define PB push_back
#define REP(i, a, b) for(int i = a; i<b; i++)
using namespace std;

void solve(){
    int n; cin>>n;
    vector <int> a (n);
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    int zero = 0;
    bool ini = false;
    sort(a.begin(), a.end());
    for(int i = 0; i<n; i++){
        if(a[i] == 0){
            zero++;
        }
        else if(i!=n-1 && a[i] == a[i+1]){
            ini = true;
        }
    }
    if(zero == 0){
        if(ini)
            cout<<n<<"\n";
        else
            cout<<n+1<<"\n";
    }
    else
        cout<<n-zero<<"\n";
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