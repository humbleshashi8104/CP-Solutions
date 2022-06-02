#include <bits/stdc++.h>
#include <algorithm>
typedef long long ll;
typedef long long ll;
#define PB push_back
#define REP(i, a, b) for(int i = a; i<b; i++)
using namespace std;

void solve(){
    int n; cin>>n;
    string s; cin>>s;
    int ans = 1e9;
    vector<int> check;
    for(int i = 0; i<n; i++){
        if(s[i] == 'a'){
            check.push_back(i);
        }
    }

    for(int k = 0; k<check.size(); k++){
        // cout<<i<<"\n";
        int i = check[k];
        if(s[i] == 'a' && i!=n-1){
            // cout<<i<<"\n";
            int j = i+1;
            int a = 1, b = 0, c = 0;
            while(j != n){
                if(s[j] == 'b')
                    b++;
                else if(s[j] == 'a'){
                    a++;
                }
                else
                    c++;
                if((a>b && a>c)||j-i+1>=7)
                    break;
                j++;
            }
            // cout<<i<<" "<<j<<"\n";
            if(a>b && a>c ){
                if(ans > j-i+1)
                    ans = j-i+1;
            }
        }
    }
    if(ans == 1e9){
        cout<<-1<<"\n";
    }
    else{
        cout<<ans<<"\n";
    }
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
       solve();    
    }
}
