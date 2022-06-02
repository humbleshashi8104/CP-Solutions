#include <bits/stdc++.h>
#include <algorithm>
typedef long long ll;
#define PB push_back
#define rep(i, a, b) for(int i = a; i<b; i++)
using namespace std;


void solve(){
    int n, k; cin>>n>>k;
    if(k > n){
        cout<<"NO\n";
        return;
    }
    multiset <int> powers;
    while(n != 0){
        int g = log2(n);
        // cout<<log2(n)<<"\n";
        int t = pow(2, g);
        powers.insert(t);
        n -= t;
    }
    // cout<<powers.size()<<endl;
    if(powers.size() > k){
        cout<<"NO\n";
        return;
    }
    while(powers.size()!=k){
        multiset <int> :: iterator it = --powers.end();
        if(*it != 1){
            int g = (*it)/2;
            powers.erase(it);
            powers.insert(g);
            powers.insert(g);

        }
    }
    cout<<"YES\n";
    for(multiset <int> :: iterator it = powers.begin(); it!=powers.end(); it++){
        cout<<*it<<" ";
    }
    cout<<"\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 
    // int t; cin>>t;
    // while(t--)
        solve();

}
