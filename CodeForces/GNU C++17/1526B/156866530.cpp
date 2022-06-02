#include <bits/stdc++.h>
#include <algorithm>
typedef long long ll;
typedef long long ll;
#define PB push_back
#define REP(i, a, b) for(int i = a; i<b; i++)
using namespace std;

int nums[] = {11, 111, 1111, 11111, 111111, 1111111, 11111111};
map <int, int> dp;
bool solve(int n){
    if(n == 0)
        return true;
    if(n < 0)
        return false;
    if(dp[n] == 1)
        return true;
    if(dp[n] == -1)
        return false;
    for(int i = 0; i<7; i++){
        if(solve(n-nums[i])){
            dp[n] = 1;
            return true;
        }
    }
    dp[n] = -1;
    return false;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 
    int t; cin>>t;

    while(t--){
        int n; cin>>n;
        if(n > 1099){
            cout<<"Yes\n";
            continue;
        }
        if(solve(n))
            cout<<"Yes\n";
        else
            cout<<"No\n";    
    }
}
