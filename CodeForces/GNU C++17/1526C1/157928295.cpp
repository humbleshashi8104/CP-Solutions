#include <bits/stdc++.h>
typedef long long ll;
#define PB push_back
#define rep(i, a, b) for(int i = a; i<b; i++)
using namespace std;


 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 
    int n; cin>>n;
    vector <int> a(n);
    ll sum = 0;
    multiset <int> s;
    int ans= n;
    rep(i,0,n){
        cin>>a[i];
    }
    rep(i,0,n){
        sum+=a[i];
        if(a[i]<0){
            s.insert(a[i]);
        }
        multiset <int> :: iterator it = s.begin();
        while(sum<0){
            sum -= *it;
            s.erase(it);
            it = s.begin();
            ans--;
        }
    }
    cout<<ans<<"\n";
}

