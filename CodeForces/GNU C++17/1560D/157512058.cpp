#include <bits/stdc++.h>
#include <algorithm>
typedef long long ll;
typedef long long ll;
#define PB push_back
#define rep(i, a, b) for(int i = a; i<b; i++)
using namespace std;


void solve(){
    string s; cin>>s;
    int ans = s.size()+1;
    for(int i = 0; pow(2, i)<=1e18; i++){
        string k = to_string((long long)pow(2, i));
        int j = 0;
        int l = 0;
        int remove = 0;
        while(j<s.size() && l<k.size()){
            if(s[j] == k[l]){
                l++;
                j++;
                continue;
            }
            remove++;
            j++; 
            
        }   
        // cout<<k<<"\n";
        remove += (s.size()-j) + (k.size()-l);
        // cout<<remove<<"\n";
        ans = min(ans, remove);
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
