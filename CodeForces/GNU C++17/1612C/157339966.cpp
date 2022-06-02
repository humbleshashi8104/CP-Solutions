#include <bits/stdc++.h>
#include <algorithm>
typedef long long ll;
#define PB push_back
#define rep(i, a, b) for(int i = a; i<b; i++)
using namespace std;

void solve(){
    long long k, x; cin>>k>>x;
    if(x <= (k*(k+1)/2)){
        long long g = ceil((-1 + sqrt(1 + 8*x))/2);
        cout<<g<<"\n";
    }
    else if(x<k*k){
        long long t = x - (k*(k+1))/2;
        long long y = 2*k - 1;
        long long g = ceil((y - sqrt(y*y - 8*t))/2);
        cout<<g+k<<"\n";
    }
    else{
        cout<<2*k-1<<"\n";
    }
}
 
 
int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 
    int t; cin>>t;
    while(t--)
        solve();
}