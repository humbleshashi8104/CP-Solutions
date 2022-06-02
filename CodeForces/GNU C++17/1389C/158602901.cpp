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
    string s; cin>>s;
    int ans = 2;
    rep(i,0,10){
        rep(j,0,10){
            int count = 0;
            rep(k,0,s.size()){
                char a = '0' + i;
                char b = '0' + j;
                if(count%2 == 0 && s[k] == a){
                    count++;
                }
                else if(count%2 == 1 && s[k] == b){
                    count++;
                }
            }
            if(count%2 == 0 || (count%2 == 1 && i==j)){
                ans = max(ans, count);
            }
            else if(count%2 == 1 && i!=j){
                ans = max(ans, count-1);
            }
        }   
    }
    cout<<s.size()-ans<<"\n";
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

