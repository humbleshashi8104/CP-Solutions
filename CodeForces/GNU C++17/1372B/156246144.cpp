#include <bits/stdc++.h>
#include <algorithm>
typedef long long ll;
typedef long long ll;
#define PB push_back
#define REP(i, a, b) for(int i = a; i<b; i++)
using namespace std;

void solve(){
    long long n; cin>>n;
    bool np = false;
    int i;
    for(i = 2; i*i<=n; i++){
        if(n%i == 0){
            np = true;
            break;
        }
    }
    if(np){
        cout<<n/i<<' '<<(i-1)*n/i<<'\n';
        return;
    }
    cout<<1<<" "<<n-1<<"\n";
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