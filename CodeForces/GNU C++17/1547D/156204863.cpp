#include <bits/stdc++.h>
#include <algorithm>
typedef long long ll;
#define PB push_back
#define REP(i, a, b) for(int i = a; i<b; i++)
using namespace std;


void solve(){
    int n; cin>>n;
    unsigned long long last = 0;
    for(int i = 0; i<n; i++){
        // cout<<i<<endl;
        unsigned long long a; cin>>a;
        unsigned long long lt = last;
        unsigned long long t = a;
        if(i == 0){
            cout<<0<<" ";
            last = a^0;
            continue;
        }
        unsigned long long temp = 0;
        int g = 0;
        while(a!=0 || last!=0){
            // cout<<last<<" "<<a<<endl;
            if(last%2 == 1 && a%2 == 0){
                // cout<<k<<endl;
                temp = (1 << g) | temp;
            }
            // else if(last%2 == 0 && a%2 == 0){
            //     temp = (1 << g) | temp;
            // }
            a=a/2;
            last=last/2;
            g++;
        }
        cout<<temp<<" ";
        last = t^temp;
        // cout<<last<<"\n";
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
    while(t--){
        solve();
    }
}
//