#include <bits/stdc++.h>
#include <algorithm>
typedef long long ll;
typedef long long ll;
#define PB push_back
#define REP(i, a, b) for(int i = a; i<b; i++)
using namespace std;
 
 
void solve(){
    int n; cin>>n; 
    int k; cin>>k;
    map <int, int> m;
    set <int> s;
    int min = 1e9;
    int max = -1e9;
    for(int i = 0; i<n; i++){
        int t;
        cin>>t;
        if(t < min){
            min = t;
        }
        if(t > max){
            max = t;
        }
        s.insert(t);
        m[t]++;
    }
    int l = -1, r = -1;
    int diff = -1e9;
    pair<int, int> ans = make_pair(-1, -1);
    int oo = *s.begin();
    int y = *(--s.end());
    set<int> :: iterator  it = s.begin(); 
    // cout<<*it<<"\n";
    for(int i = oo; it!=s.end();){
        // cout<<i<<" "<<*it<<"\n";
        if(*it != i){
            l = -1;
            r = -1;
            i = *it;
            continue;
        }
        else if(m[i]>=k && l==-1){
            l = i;
            if(0 > diff){
                ans = make_pair(l, l);
                diff = 0;
            }
            
        }
        else if(m[*it]>=k && l!=-1){
            r = *it;
            if(diff < (r - l)){
                ans = make_pair(l, r);
                diff = r-l;
            }
        }
        else if(m[i]<k){
            l = -1;
            r = -1;
        }
        it++, i++;
        // cout<<diff<<"\n";
    }
    if(ans.first == -1 || ans.second == -1){
        cout<<-1<<"\n";
        return;
    }
    cout<<ans.first<<" "<<ans.second<<"\n";
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 
    int t; cin>>t;
    while(t--){
        solve();
    }
}