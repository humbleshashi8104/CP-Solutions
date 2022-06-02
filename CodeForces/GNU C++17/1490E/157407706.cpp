#include <bits/stdc++.h>
#include <algorithm>
typedef long long ll;
#define PB push_back
#define rep(i, a, b) for(int i = a; i<b; i++)
using namespace std;


void solve(){
    int n; cin>>n; 
    vector <pair<ll, ll> > a(n);
    rep(i, 0, n){
        long long t; cin>>t;
        a[i] = make_pair(t, i+1);
    }
    sort(a.begin(), a.end());
    int head = -1;
    rep(i, 0, n-1){
        if(a[i].first >= a[i+1].first){
            // cout<<"here\n";
            if(head == -1){
                head = i;
            }
        }
        else{
            head = -1;
        }
        // cout<<head<<"\n";
        a[i+1].first += a[i].first;
    }
    if(head == -1){
        cout<<1<<"\n";
        cout<<(--a.end())->second<<"\n";
        return;
    }
    vector<int> ans;
    for(int i = head; i<n; i++){
        ans.PB(a[i].second);
    }
    sort(ans.begin(), ans.end());
    cout<<ans.size()<<"\n";
    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
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
    int t; cin>>t;
    while(t--)
        solve();

}
