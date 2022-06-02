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
    vi a (n);
    rep(i,0,n){ 
        cin>>a[i];
    }
    if(n%2 == 1){
        cout<<"NO\n";
        return;
    }
    sort(all(a));
    int maxi = 0;
    vi first (n/2);
    vi last (n/2);
    rep(i,0,n){
        int count = 1;
        while(i!=n-1 && a[i] == a[i+1]){
            count++;
            i++;
        }
        maxi = max(count, maxi);
    }
    if(maxi > n/2){
        cout<<"NO\n";
        return;
    }
    rep(i,0,n/2){
        if(a[i]==a[i+n/2] || (a[i+n/2] == a[(i+1)%(n/2)])){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
    rep(i,0,n/2){
        cout<<a[i]<<" "<<a[i+n/2]<<" ";
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

