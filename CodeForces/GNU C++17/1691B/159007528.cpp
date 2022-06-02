#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<long long> vll;
#define pb push_back
#define rep(i,a,b) for(int i = a; i < b; i++)
#define all(x) x.begin(),x.end()

void solve(){
    int n; cin>>n;
    vi a(n);
    map <int, int> f;
    rep(i,0,n){
        cin>>a[i];
        f[a[i]]++;
    }
    for(map<int, int> :: iterator it = f.begin(); it!=f.end(); it++){
        if(it->second < 2){
            cout<<-1<<"\n";
            return;
        }
    }
    int l = 0;
    for(map<int, int> :: iterator it = f.begin(); it!=f.end(); it++){
        cout<<it->second + l<<' ';
        int g = l;
        for(;l<g+it->second-1; l++){
            cout<<l+1<<" ";
        }
        l+=1;
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
    while(n--){
        solve();
    }
}

