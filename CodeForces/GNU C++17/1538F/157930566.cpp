#include <bits/stdc++.h>
typedef long long ll;
#define PB push_back
#define rep(i, a, b) for(int i = a; i<b; i++)
using namespace std;

void solve(){
    int l, r; cin>>l>>r;
    int g = r-l+1;
    ll total = r-l;
    int i = 1;
    while(true){
        total += r/((ll)pow(10, i)) - l/((ll)pow(10, i));
        if(r/((ll)pow(10, i)) == 0){
            break;
        }
        i++;
    }
    cout<<total<<"\n";
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

