#include <bits/stdc++.h>
typedef long long ll;
#define PB push_back
#define rep(i, a, b) for(int i = a; i<b; i++)
using namespace std;

void solve(){
    long long a, b, c; cin>>a>>b>>c;
    long long x, y, z;
    long long g = max(a,max(c,b));
    if(g == a){
        x = a;
        z = a + c;
        y = a + c + b;
    }
    else if(g == b){
        y = b;
        x = b + a;
        x = a + b + c;
    }
    else{
        z = c;
        y = c + b;
        x = a + b + c;
    }
    cout<<x<<" "<<y<<" "<<z<<"\n";
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
