#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ull> vll;
#define pb push_back
#define rep(i,a,b) for(int i = a; i < b; i++)
#define all(x) x.begin(),x.end()

void solve(){
    int n; cin>>n;
    string s; cin>>s;

    int ind = s.size()-1;
    rep(i,0,n-1){
        if((i == 0) && s[i] <= s[i+1]){
            cout<<s[0]<<s[0]<<"\n";
            return;
        }
        if(s[i] < s[i+1]){
            ind = i;
            break;
        }
    }
    rep(i,0,ind+1){
        cout<<s[i];
    }
    for(int i = ind; i>=0; i--){
        cout<<s[i];
    }
    cout<<"\n";
   
}

int main(){
    cin.tie(0); 
    cout.tie(0); 
    ios_base::sync_with_stdio(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 
    int n; cin>>n;
    while(n--)
        solve();
}   