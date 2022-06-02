#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<long long> vll;
#define pb push_back
#define rep(i,a,b) for(int i = a; i < b; i++)
#define all(x) x.begin(),x.end() 
void solve(){
    int n; cin>>n;
    int y = n;
    map<int, int> m;
    while(n--){
        int t; cin>>t;
        m[t]++;
    }
    vector <int> cnt;
    for(map<int, int> :: iterator it = m.begin(); it!=m.end(); it++){
        cnt.pb(it->second);
    }
    sort(cnt.begin(), cnt.end());
    int l = 0; int r = cnt.size();
    int ans = 1e9;
    int prev = -1;
    rep(i,0,cnt.size()){
        if(prev == cnt[i])
            continue;
        long in = lower_bound(cnt.begin(), cnt.end(), cnt[i]) - cnt.begin();
        int l = y - (cnt.size() - in)*(cnt[i]);
        ans = min(l, ans);
        prev = cnt[i];
    }
    cout<<ans<<"\n";
}
int main(){
    cin.tie(0); 
    cout.tie(0); 
    ios_base::sync_with_stdio(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 

    int n; cin>>n;
    while(n--){
        solve();
    }
}

