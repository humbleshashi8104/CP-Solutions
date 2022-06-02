#include <bits/stdc++.h>
#include <algorithm>
typedef long long ll;
typedef long long ll;
#define PB push_back
#define REP(i, a, b) for(int i = a; i<b; i++)
using namespace std;


void solve(){
    int n; cin>>n;
    long long sum = 0;
    vector <long long> a (n, 0);
    long long last1, last2;
    for(int i = 0; i<n; i++){
        long long t; cin>>t;
        last1 = t;
        if(i == 0)
            continue;
        a[i] = t;
    }
    sum = 0;
    vector <long long> b (n, 0);
    for(int i = 0; i<n; i++){
        long long t; cin>>t;
        if(i == 0)
            last2 = t;
        if(i == n-1)
            continue;
        sum+=t;
        b[i] = sum;
    }
    if(n == 1){
        cout<<0<<"\n";
        return;
    }
    if(n==2){
        cout<<min(last2, last1)<<"\n";
        return;
    }
    sum = 0;
    vector <long long> c (n, 0);
    for(int i = n-1; i>=1; i--){
        sum+=a[i];
        c[i] = sum;
    }

    long long min1 = 1e9;
    for(int i = 0; i<n-2; i++){
        // cout<<max(b[i], c[i+2])<<"\n";
        if(min1 > max(b[i], c[i+2])){
            min1 = max(b[i], c[i+2]);
        }
    }
    // cout<<min1<<"\n";
    min1 = min(min1, min(c[1], b[n-2]));
    cout<<min1<<"\n";

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
