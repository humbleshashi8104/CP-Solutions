#include <bits/stdc++.h>
typedef long long ll;
#define PB push_back
#define rep(i, a, b) for(int i = a; i<b; i++)
using namespace std;

void solve(){
    long long n; cin>>n;
    string s = to_string(n);
    if(s.size() == 2){
        cout<<s[1]<<"\n";
        return;
    }
    long long maxi = 9;
    while(n>0){
        maxi = min(maxi, n%10);
        n/=10;
    }
    cout<<maxi<<"\n";
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
