#include <bits/stdc++.h>
#include <algorithm>
typedef long long ll;
#define PB push_back
#define rep(i, a, b) for(int i = a; i<b; i++)
using namespace std;


void solve(){
    int n; cin>>n;
    vector <ll> a (n);
    rep(i, 0, n){
        cin>>a[i];
    }
    // for(int i = 0; i<n; i++){
    //     cout<<a[i]<<" ";
    // }
    // cout<<"\n";
    long long sum1 = 0;
    for(int i = 1; i<n; i+=2){
        sum1+=a[i];
    }
    long long sum2 = 0;
    for(int i = 0; i<n; i+=2){
        sum2+=a[i];
    }
    if(sum1 > sum2){
        // cout<<"here\n";
        for(int i = 1; i<n; i+=2){
            cout<<1<<" "<<a[i]<<" ";
        }
        if(n%2 == 1)
            cout<<1;
    }
    else{
        for(int i = 0; i<n; i+=2){
            cout<<a[i]<<" ";
            if(i!=n-1)
                cout<<1<<" ";
        }
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
