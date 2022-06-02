#include <bits/stdc++.h>
#include <algorithm>
typedef long long ll;
typedef long long ll;
#define PB push_back
#define REP(i, a, b) for(int i = a; i<b; i++)
using namespace std;

void solve(){
    long long n; cin>>n;
    if(n == 1){
        cout<<"FastestFinger\n";
        return;
    }
    if(n%2 == 1 || n == 2) {
        cout<<"Ashishgup\n";
        return;
    }
    int count = 0;
    while(n%2==0){
        n/=2;
        count++;
    }
    if(n == 1){
        cout<<"FastestFinger\n";
        return;
    }
    if(count == 1){
        int cnt = 0;
        for(int i = 3; i*i<=n; i+=2){
            while(n%i == 0){
                cnt++;
                n/=i;
            }
        }
        if (n > 2)
            cnt++;
        // cout<<cnt<<"\n";
        if(cnt != 1){
            cout<<"Ashishgup\n";
        }
        else{
            cout<<"FastestFinger\n";
        }
        return;
    }
    cout<<"Ashishgup\n";
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
