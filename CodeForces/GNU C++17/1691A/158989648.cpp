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
    vi a(n);
    rep(i,0,n){
        cin>>a[i];
    }
    int odd = 0;
    int even = 0;
    rep(i,0,n){
        if(a[i]%2 == 1){
            odd++;
        }
        else{
            even++;
        }
    }
    cout<<min(odd, even)<<"\n";
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

