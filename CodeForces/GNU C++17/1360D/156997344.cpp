/*
My pain is constant and sharp, 
and I do not hope for a better world for anyone. 
In fact, I want my pain to be inflicted on others. 
I want no one to escape. But even after admitting this, 
there is no catharsis; my punishment continues to elude me, 
and I gain no deeper knowledge of myself.
*/

#include <bits/stdc++.h>
#include <algorithm>
typedef long long ll;
typedef long long ll;
#define PB push_back
#define REP(i, a, b) for(int i = a; i<b; i++)
using namespace std;

void solve(){
    long long n, k; cin>>n>>k;
    if(n<=k){
        cout<<1<<"\n";
        return;
    }
    long long ans = n;
    for(int i = 2; i*i<=n; i++){
        if(n%i == 0){
            if(i <= k){
                ans = min(n/i, ans);
            }
            if(n/i <= k){
                ans = min((long long)i, ans);
            }
        }
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
    int t; cin>>t;
    while(t--)
        solve();

}
