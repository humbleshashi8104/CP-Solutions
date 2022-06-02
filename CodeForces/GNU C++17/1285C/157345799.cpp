#include <bits/stdc++.h>
#include <algorithm>
typedef long long ll;
typedef long long ll;
#define PB push_back
#define REP(i, a, b) for(int i = a; i<b; i++)
using namespace std;

vector <ll> factors;

pair<ll, ll> recur(int index, ll a, ll b){
    if(index == factors.size()){
        // cout<<a<<' '<<b<<"\n";
        return make_pair(a, b);
    }
    // cout<<factors[index]<<"\n";
    pair <ll, ll> v = recur(index+1, a*factors[index], b);
    pair <ll, ll> u = recur(index+1, a, b*factors[index]);
    if(max(v.first, v.second) < max(u.first, u.second)){
        return v;
    }
    return u;
}

void solve(){
    // cout<<"here\n";
    long long n; cin>>n; 
    
    int cnt = 0;
    while (n % 2 == 0){
        // cout<<2<<" ";
        cnt++;
        n/=2;
    }
    factors.PB(pow(2, cnt));
    // cout<<factors[0]<<"\n";
    for (int i = 3; i <= sqrt(n); i = i + 2){
        cnt = 0;
        while (n % i == 0){
            // cout<<i<<" ";
            cnt++;
            n/=i;
        }
        // if(i !+ )
        if(cnt != 0)
            factors.PB(pow(i, cnt));
    }
    if(n!=1){
        // cout<<n<<" ";
        factors.PB(n);
    }
    // cout<<"\n";
    // cout<<"here\n";
    pair <ll, ll> t = recur(0, 1, 1);
    cout<<t.first<<" "<<t.second<<"\n";
    // for(int i = 0; i<factors.size(); i++){
    //     cout<<factors[i]<<" ";
    
    // sort(factors.begin(), factors.end());
    // for(int i = factors.size()-1; i>=0; i--){
    //     cout<<a<<" "<<b<<" "<<factors[i]<<"\n";
    //     if(a<b){
    //         a*=factors[i];
    //         continue;
    //     }
    //     b*=factors[i];

    // }
    // if(a<b){
    //     cout<<a<<" "<<b<<"\n";
    //     return;
    // }
    // cout<<b<<" "<<a<<"\n";
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
