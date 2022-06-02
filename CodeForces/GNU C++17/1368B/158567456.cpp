#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<long long> vll;
#define pb push_back
#define rep(i,a,b) for(int i = a; i < b; i++)
#define all(x) x.begin(),x.end()

int main(){
    cin.tie(0); 
    cout.tie(0); 
    ios_base::sync_with_stdio(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 
    ll n; cin>>n;
    string s = "codeforces";
    ll product = 1;
    vi a(10, 1);
    int i = 0;
    while(true){
        if(product >= n) break;
        product/=a[i%10];
        a[i%10]++;
        product*=a[i%10];
        i++;
    }
    rep(i,0,10){
        rep(j,0,a[i]){
            cout<<s[i];
        }
    }
    cout<<"\n";
}   