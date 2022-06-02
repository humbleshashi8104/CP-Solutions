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
    int count = 0;
    for(int i = 0; i<s.size()-1; i++){
        if(i%2 == 0){
            int j = i+1;
            while(s[j] == s[i]){
                if(j>= s.size()){
                    break;
                }
                s.erase(s.begin()+j);
            } 
        }
    }
    if((s.size())%2 == 1){
        cout<<n-s.size()+1<<"\n";
        s.erase(s.end()-1);
        cout<<s<<"\n";
        return;
    }
    cout<<n-s.size()<<"\n";
    cout<<s<<"\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 
    solve();
}