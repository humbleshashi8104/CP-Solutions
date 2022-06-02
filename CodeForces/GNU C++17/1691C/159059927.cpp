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
    int n, k; cin>>n>>k;
    string s; cin>>s;
    int last = -1;
    int first = -1;
    int cnt = 0;
    rep(i,0,n){
        if(s[i] == '1'){
            if(!cnt){
                first = i;
            }
            last = i;
            cnt++;
        }
    }
    if(last == -1){
        cout<<0<<'\n';
        return;
    }
    if(cnt == 1){
        if(n-last-1 <= k){
            cout<<1<<"\n";
            return;
        }
        else if(first<=k){
            cout<<10<<"\n";
            return;
        }
    }
    if(n-last-1 <= k){
        s[last] = '0';
        s[n-1] = '1';
        k-=(n-last-1);
    }
    if(first <= k){
        s[first] = '0';
        s[0] = '1';
    }
    ll ans = 0;
    rep(i,0,n-1){
        int t = s[i] - '0';
        int y = s[i+1] - '0';
        ans += 10*t + y;
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

