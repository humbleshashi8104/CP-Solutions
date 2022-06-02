#include <bits/stdc++.h>
typedef long long ll;
#define PB push_back
#define rep(i, a, b) for(int i = a; i<b; i++)
using namespace std;

vector <ll> facts;
int ans = 1e9;

int ones(long long k){
    int count = 0;
    while(k>0){
        count+=1;
        k = k&(k-1);
    }
    return count;
}

void solve(long long n, int index, int used){
    if(index == facts.size()){
        return;
    }
    ans = min(ans, used+ones(n));
    if(n-facts[index]<0){
        return;
    }
    solve(n-facts[index], index+1, used+1);
    solve(n, index+1, used);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll a = 2; 
    long long i = 3;
    while(a <= 1e12){
        a*=i;
        i++;
        facts.PB(a);
    }
    int t; cin>>t;
    while(t--){
        long long n; cin>>n;
        ans = 1e9;
        solve(n,0,0);
        cout<<ans<<"\n";
    }
}
