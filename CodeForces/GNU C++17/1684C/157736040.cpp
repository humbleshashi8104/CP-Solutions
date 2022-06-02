#include <bits/stdc++.h>
typedef long long ll;
#define PB push_back
#define rep(i, a, b) for(int i = a; i<b; i++)
using namespace std;

void solve(){
    
    int m,n; cin>>m>>n;
    vector <int> a[n];
    rep(j,0,m){
        rep(i,0,n){
            int t; cin>>t;
            a[i].PB(t);
            // cout<<t<<' ';
        }
    }
    // rep(j,0,m){
    //     rep(i,0,n){
    //         cout<<a[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }
    // cout<<"\n";
    int s = 1, q = 1;
    bool y = false;
    for(int j = 0; j<m; j++){
        int minx = 1e9+1, mini = 0;
        int maxx = -1, maxi = -1;
        for(int i = 0; i<n; i++){
            if(i!=n-1 && a[i+1][j] < a[i][j]){
                if(maxi == -1){
                    maxi = i;
                }
                maxx = a[i][j];
                break;
            }
            if(a[i+1][j] == a[i][j]){
                if(maxi == -1){
                    maxi = i;

                }
                else
                    maxi = min(maxi, i);
            }
            else
                maxi = -1;
        }
        for(int k = maxi+1; k<n; k++){
            if(a[k][j] <= minx){
                minx = a[k][j];
                mini = k;
            }
        }
        if(maxx != -1 && maxx != minx){
            q = mini+1, s = maxi+1;
            vector <int> temp = a[mini];
            a[mini] = a[maxi];
            a[maxi] = temp;
            break;
        }
    }
    bool l = true;
    // rep(j,0,m){
    //     rep(i,0,n){
    //         cout<<a[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }
    // cout<<"\n";

    rep(j,0,m){
        rep(i,0,n-1){
            if(a[i+1][j] < a[i][j]){
                l = false;
                break;
            }
        }
        if(!l){
            break;
        }
    }

    if(l){
        cout<<s<<" "<<q<<"\n";
    }
    else{
        cout<<-1<<"\n";
    }
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 
    int n; cin>>n;
    while(n--){
        solve();
    }
}
