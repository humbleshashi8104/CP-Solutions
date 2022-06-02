#include <bits/stdc++.h>
typedef long long ll;
#define PB push_back
#define rep(i, a, b) for(int i = a; i<b; i++)
using namespace std;

void solve(){
    int n; cin>>n;
    int cnt[n][27];
    memset(cnt, 0, sizeof cnt); 
    rep(i,0,n){
        string s; cin>>s;
        cnt[i][0] = s.size();
        rep(j,0,s.size()){
            cnt[i][s[j] - 'a' + 1]++;
        }
    }
    int ans = 0;
    rep(i,1,27){
        multiset<int> s;
        rep(j,0,n){
            s.insert(2*cnt[j][i] - cnt[j][0]);
        }
        int total = 0;
        int g = 0;
        for(multiset<int> :: iterator it = --s.end();; it--){
            total+=*it;
            g++;
            if(total <= 0){
                g--;
                break;
            }
            if(it == s.begin()){
                break;
            }
        }
        ans = max(ans, g);
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

