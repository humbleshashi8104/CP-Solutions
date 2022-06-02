#include <bits/stdc++.h>
#include <algorithm>
typedef long long ll;
#define PB push_back
#define rep(i, a, b) for(int i = a; i<b; i++)
using namespace std;


void solve(){
    int m, n; cin>>m>>n;
    vector <string> s (m);
    for(int i = 0; i<m; i++){
        cin>>s[i];   
    }
    int x1, y1;
    bool c = false;
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            if(s[i][j] == 'R'){
                y1 = i; 
                x1 = j;
                c = true;
                break;
            }
        }
        if(c){
            break;
        }
    }
    int x2, y2;
    c = false;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(s[j][i] == 'R'){
                x2 = i; 
                y2 = j;
                c = true;
                break;
            }
        }
        if(c){
            break;
        }
    }
    // cout<<x1<<" "<<y1<<"\n";
    // cout<<x2<<" "<<y2<<"\n";
    if(x1 == x2 && y1 == y2){
        cout<<"YES\n";
        return;
    }
    cout<<"NO\n";
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
