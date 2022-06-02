#include <bits/stdc++.h>
#include <algorithm>
typedef long long ll;
typedef long long ll;
#define PB push_back
#define rep(i, a, b) for(int i = a; i<b; i++)
using namespace std;

void solve(){
    string s; cin>>s;
    int cnt = 0;
    bool changed [s.size()];
    for(int i = 0; i <s.size(); i++)
        changed[i] = false;

    rep(i, 0, s.size()){
        if(i+1 < s.size()){
            if(s[i] == s[i+1] && !changed[i]){
                changed[i+1] = true;
                cnt++;
            }
        }
        if(i+2< s.size() && !changed[i]){
            // cout<<s[i]<<" "<<s[i+2]<<"\n";
            if(s[i] == s[i+2]){
                changed[i+2] = true;
                cnt++;
            }
        }
    }
    cout<<cnt<<"\n";
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