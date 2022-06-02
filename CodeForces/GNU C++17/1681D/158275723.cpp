#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
 
long long k;
map <long long, int> m;
 
int solve(long long n){

    if(m[n]){
        return m[n];
    }

    long long h = n; int cnt = 0;
    while(h>0){
        cnt++;
        h/=10;
    }
    // cout<<n<<" "<<cnt<<"\n";
    if(cnt==k){
        return 0;
    }
    
    long long g = n;
    int a = 1e9;
    bool b = true;
    while(g>0){
        if(g%10 != 1 && g%10!=0){
            a = min(a, 1+solve(n*(g%10)));
            b = false;
        }
        g/=10;
    }
    if(b) return 1e9;
    m[n] = (a);
    return m[n];
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 
    cin>>k;
    long long x; cin>>x;
    long long h = x;
    bool b = true;
    int cnt = 0;
    while(h>0){
        if(h%10!=1 && h%10!=0) b = false;
        h/=10;
        cnt++;
    }
    // cout<<b<<"\n";
    if(cnt >= k){
        cout<<0<<"\n";
        return 0;
    }
    if(b){
        cout<<-1<<"\n";
        return 0;
    }
    int ans = solve(x);
    if(ans == 1e9){
        cout<<-1<<"\n";
        return 0;
    }
    
    cout<<solve(x)<<"\n";
}
