#include <bits/stdc++.h>
#include <algorithm>
typedef long long ll;
typedef long long ll;
#define PB push_back
#define REP(i, a, b) for(int i = a; i<b; i++)
using namespace std;

void solve(){
    long long n; cin>>n;
    long long rt = n;
    vector <pair<int, long long> > a;
    for(long long i = 2; i*i<=n; i++){
        int count = 0;
        while(n%i == 0){
            count++;
            n/=i;
        }
        if(count != 0)
            a.PB(make_pair(count, i));
    }
    if(n != 1){
        a.PB(make_pair(1, n));
    }
    sort(a.begin(), a.end());
    int g = a[a.size()-1].first;
    long long t = a[a.size()-1].second;
    vector <long long> ans (g);
    for(int i = 0; i<g; i++){
        ans[i] = t;
    }
    rt = rt/((long long)pow(t, g));
    cout<<g<<"\n";
    ans[g-1]*=rt;
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