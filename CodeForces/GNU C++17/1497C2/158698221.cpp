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
    int g, k; cin>>g>>k;
    rep(i,0,k-3){
        cout<<1<<" ";
    }
    g-=k-3;
    if(g%3 == 0){
        cout<<g/3<<" "<<g/3<<" "<<g/3<<"\n";
    }
    else if(g%4 == 0){
        cout<<g/4<<" "<<g/4<<" "<<g/2<<"\n";
    }
    else if(g%2 == 0){
        cout<<2<<" "<<(g-2)/2<<" "<<(g-2)/2<<"\n";
    }
    else{
        cout<<1<<" "<<(g-1)/2<<" "<<(g-1)/2<<"\n";
    }


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

