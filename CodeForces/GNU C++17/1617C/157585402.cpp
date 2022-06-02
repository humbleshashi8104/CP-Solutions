#include <bits/stdc++.h>
#include <algorithm>
typedef long long ll;
typedef long long ll;
#define PB push_back
#define rep(i, a, b) for(int i = a; i<b; i++)
using namespace std;

void solve(){
    int n; cin>>n;
    vector <int> a;
    set <int> s;
    rep(i,0,n){
        s.insert(i+1);
    }
    rep(i,0,n){
        int t; cin>>t;
        set <int> :: iterator it = s.find(t);
        if(it != s.end()){
            s.erase(it);
        }
        else{
            a.PB(t);
        }
    }
    sort(a.begin(), a.end());
    int i = 0;
    ll cnt = 0;
    for(set<int> :: iterator it = s.begin(); it!=s.end(); it++){
        int g = (a[i]-1)/2;
        if(*it <= g){
            cnt++;
        }
        else{
            cout<<-1<<"\n";
            return;
        }
        i++;
    }
    cout<<cnt<<'\n';
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