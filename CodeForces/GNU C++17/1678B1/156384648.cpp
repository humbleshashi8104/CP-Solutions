#include <bits/stdc++.h>
#include <algorithm>
typedef long long ll;
typedef long long ll;
#define PB push_back
#define REP(i, a, b) for(int i = a; i<b; i++)
using namespace std;

void solve(){
    int n; cin>>n;
    string s; cin>>s;
    char last = s[0];
    int count = 1;
    int steps = 0;

    for(int i = 1; i<n; i++){
        if(s[i] != last){
            last = s[i];
            if(count%2 == 1){
                steps++;
                count++;
            }
            else{
                count = 1;
            }

            continue;
        }
        count++;
    }
    cout<<steps<<"\n";
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