#include <bits/stdc++.h>
#include <algorithm>
typedef long long ll;
#define PB push_back
#define REP(i, a, b) for(int i = a; i<b; i++)
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 
    int t; cin>>t;
    while(t--){
        int n; long long k; cin>>n>>k;
        long long  sum = 0;
        long long prev;
        bool a = false;
        REP(i, 0, n){
            long long c; cin>>c;
            if(i != 0){
                long long can_notes = (long long)pow(10, c - prev)-1;
                if(can_notes > k){
                    sum+=(k+1)*((long long)pow(10, prev));
                    cout<<sum<<"\n";
                    for(int j = i+1; j<n; j++){
                        int g;
                        cin>>g;
                    }
                    a = true;
                    break;
                }
                sum+=can_notes*((long long)pow(10,prev));
                k = k - can_notes;
            }
            prev = c;
        }
        if(a){
            continue;
        }
        if(sum+(k+1)*((long long)pow(10,prev)) < 1e9){
            cout<<sum+(k+1)*((long long)pow(10,prev))<<"\n";
            continue;
        }
        cout<<setprecision(19)<<sum+(k+1)*((long long)pow(10,prev))<<"\n";
    }
}