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
    vector<ull> a(n);
    rep(i,0,n){
        cin>>a[i];
    }
    vector<int> possible;
    for(int i = 30; i>=0; i--){
        int count = 0;
        rep(j,0,n){

            if((a[j]/((ll)pow(2, i)))%2 == 0){
                count++;
            }
        }
        if(count<=k){
            possible.pb(i);
            k-=count;
        }
    }
    rep(j,0,possible.size()){
        rep(i,0,n){
            a[i] = a[i] | 1<<possible[j];
        }
    }
    ull ans = 0;
    rep(i,0,n){
        if(i == 0) ans = a[i];
        ans = ans & a[i];     
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

