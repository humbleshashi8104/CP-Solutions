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
    int n, k; cin>>n>>k;
    if(k == n-1 && n == 4){
        cout<<-1<<"\n";
        return;
    }
    int g = log2(n);
    vector <pair<int, int> > p (n/2);
    map<int, int> m;
    rep(i,0,n/2){
        int a = i;
        int b = 0;
        rep(j,0,g){
            if(a%2 == 0){
                b = b | 1<<j;
            }
            a/=2;
        }
        p[i] = make_pair(i, b);
        m[i] = i;
        m[b] = i;
    }
   
    
    if(k == n-1){
        int l = m[k-1];
        if(k == p[l].first){
            p[0].second = p[l].second;
            p[l].second = n-1;
        }
        else{
            p[0].second = p[l].first;
            p[l].first = n-1;
        } 
        l = m[3];
        swap(p[1].second, p[l].first);
        rep(i,0,n/2){
            cout<<p[i].first<<" "<<p[i].second<<"\n";
        }
        return;
    }
    int l = m[k];
    if(k == p[l].first){
        p[0].second = p[l].second;
        p[l].second = n-1;
    }
    else{
        p[0].second = p[l].first;
        p[l].first = n-1;
    } 
    rep(i,0,n/2){
        cout<<p[i].first<<" "<<p[i].second<<"\n";
    }
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

