#include <bits/stdc++.h>
#include <algorithm>
typedef long long ll;
typedef long long ll;
#define PB push_back
#define rep(i, a, b) for(int i = a; i<b; i++)
using namespace std;

void solve(){
    int n; cin>>n;
    map <int, int> m;
    rep(i,0,n){
        int t; cin>>t;
        m[t]++;
    }
    multiset <int> s;
    for(map<int, int> :: iterator it = m.begin(); it!=m.end(); it++) {
        s.insert(it->second);
    }
    while(s.size()>1){
        int g = *(--s.end());

        int k = *(--(--s.end()));

        g--;
        k--;
        s.erase(--s.end());
        s.erase(--s.end());
        
        if(g!=0){
            s.insert(g);
        }
        if(k!=0){
            s.insert(k);
        }
        // for(set <int> ::iterator it = s.begin(); it!=s.end();it++){
        //     cout<<*it<<" ";
        // }
        // cout<<endl;
    }
    if(s.size() == 0){
        cout<<0<<"\n";
        return;
    }
    cout<<*s.begin()<<"\n";
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