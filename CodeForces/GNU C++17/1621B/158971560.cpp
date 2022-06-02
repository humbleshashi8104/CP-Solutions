#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<long long> vll;
#define pb push_back
#define rep(i,a,b) for(int i = a; i < b; i++)
#define all(x) x.begin(),x.end()
 
typedef struct {
    int r;
    int l;
    int c;
} sg;
 
void solve(){
    int n; cin>>n;
    set<pair<int, int > > ls;
    set<pair<int, int > > rs;
    int lmin = INT_MAX;
    int rmax = 0;
    sg lm;
    sg rm;
    sg longest;
    longest.r = -1;
    longest.l = 0;
    longest.c = INT_MAX;
    while(n--){
        int l,r,c; cin>>l>>r>>c;
        if(l<lmin){
            lmin = l;
            lm.r = r;
            lm.l = l;
            lm.c = c;
        }
        else if(lmin == l){
            if(lm.c > c){
                lmin = l;
                lm.r = r;
                lm.l = l;
                lm.c = c;
            }
        }
        if(r>rmax){
            rmax = r;
            rm.r = r;
            rm.l = l;
            rm.c = c;
        }
        else if(rmax ==r){
            if(rm.c > c){
                rmax = r;
                rm.r = r;
                rm.l = l;
                rm.c = c;
            }
        }
 
        if(longest.r - longest.l < r-l){
            longest.r = r;
            longest.l = l;
            longest.c = c;
        }
        else if(longest.r - longest.l == r-l){
            longest.c = min(longest.c, c);
        }
        // cout<<longest.l<<" "<<longest.r<<" "<<longest.c<<"\n";
        ll ans = INT_MAX;
        if(lm.r == rm.r && lm.l == rm.l && lm.c == rm.c){
            ans = min(ans, (ll)lm.c);
        }
        if(lm.r == rm.r){
            ans = min(ans, (ll)lm.c);
        }
        if(longest.r - longest.l == rm.r - lm.l){
            ans = min(ans, (ll)longest.c);
        }
        
        ll tot = lm.c + rm.c;
        ans = min(ans, (ll)tot);
    
        cout<<ans<<"\n";
    }
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