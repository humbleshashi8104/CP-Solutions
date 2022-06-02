#include <bits/stdc++.h>
typedef long long ll;
#define PB push_back
#define rep(i, a, b) for(int i = a; i<b; i++)
using namespace std;

void solve(){
    ll n; cin>>n;
    if(n%2 == 1){
        n--;
    }
    else{
        n-=2;
    }
    ll k = sqrt(2*n+1);
    // cout<<k<<"\n";
    // // cout<<k-2<<"\n";
    // if(k%2==0 && k>2) k--;
    // cout<<k-2<<"\n";
    cout<<(k-1)/2<<"\n";
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

//8 8*2 => 16 + 1 => 17 => 4