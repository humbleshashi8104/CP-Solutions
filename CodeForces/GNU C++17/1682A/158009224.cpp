#include <bits/stdc++.h>
typedef long long ll;
#define PB push_back
#define rep(i, a, b) for(int i = a; i<b; i++)
using namespace std;

void solve(){
    int n; cin>>n;
    string s; cin>>s;
    if(n == 1){
        cout<<1<<"\n";
        return;
    }
    int mid = n/2;
    int i = mid;
    int count = 0;
    while(true){
        if(s[i] != s[mid]) break;
        i++;
        count++;
    }
    i = mid;
    if(n%2 == 0)
        cout<<2*count<<"\n";
    else
        cout<<2*count-1<<"\n";
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
