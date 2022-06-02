#include <bits/stdc++.h>
typedef long long ll;
#define PB push_back
#define rep(i, a, b) for(int i = a; i<b; i++)
using namespace std;

void solve(){
    int n; cin>>n;
    int maxi = 0;
    while(n--){
        int t; cin>>t;
        maxi = max(t, maxi);
    }
    cin>>n;
    int maxu = 0;
    while(n--){
        int t; cin>>t;
        maxu = max(t, maxu);
    }
    if(maxi >= maxu){
        cout<<"Alice\n";
    }
    else{
        cout<<"Bob\n";
    }
    if(maxu>=maxi){
        cout<<"Bob\n";
    }
    else{
        cout<<"Alice\n";
    }
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 
    int n; cin>>n;
    while(n--){
        solve();
    }
}

