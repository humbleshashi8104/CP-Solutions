#include <bits/stdc++.h>
typedef long long ll;
#define PB push_back
#define rep(i, a, b) for(int i = a; i<b; i++)
using namespace std;
int ans;
int bs(int i, vector<int> &pre, vector<int> &suf){
    int l = 0;
    rep(t, 0, i+1){
        l = max(l, pre[t]+suf[i - t]);
    }
    ans = min(ans, max(pre[pre.size()-1]-l, i));
    // cout<<i<<" "<<pre[pre.size()-1]-l<<"\n";
    if(pre[pre.size()-1]-l < i){
        return -1;
    }
    else{
        return 1;
    }
    return 0;
}

void solve(){
    string s; cin>>s;
    int n = s.size();
    
    vector<int> pre;
    vector<int> suf;
    int sum = 0;
    rep(i,0,n){
        if(s[i] == '1'){
            pre.PB(sum);
            continue;
        }
        sum+=1;
    }
    pre.PB(sum);
    sum = 0;
    for(int i = n-1; i>=0; i--){
        if(s[i] == '1'){
            suf.PB(sum);
            continue;
        }
        sum+=1;
    }
    suf.PB(sum);
    // rep(i,0,pre.size()){
    //     cout<<pre[i]<<" ";
    // }
    // cout<<"\n";
    // rep(i,0,suf.size()){
    //     cout<<suf[i]<<" ";
    // }
    // cout<<"\n";
    ans = pre.size()-1;
    int l = 0, r = pre.size()-1;
    bool t = true;
    while(r-l>1 || t){
        int mid = (l+r)/2;
        if(r-l <= 1){
            t = false;
        }
        int g = bs(mid, pre, suf);
        if(g == -1){
            r = mid;
        }
        else{
            l = mid;
        }
        // cout<<l<<' '<<r<<"\n";
    }
    cout<<ans<<"\n";
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





















// ᴘᴠᴛʀ

