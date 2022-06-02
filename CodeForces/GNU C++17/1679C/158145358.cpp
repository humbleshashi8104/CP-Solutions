#include <bits/stdc++.h>
typedef long long ll;
#define PB push_back
#define rep(i, a, b) for(int i = a; i<b; i++)
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif   
    int n; cin>>n;
    int q; cin>>q;
    vector <int> r (n+1, 0);
    vector <int> c (n+1, 0);
    set <int> isFillR;
    set <int> isFillC;
    rep(i,1,n+1){
        isFillR.insert(i);
        isFillC.insert(i);
    }
    rep(i,0,q){
        int qi; cin>>qi;
        // cout<<qi<<"\n";
        if(qi == 1){
            // cout<<"her"<<endl;
            int x, y; cin>>x>>y;
            r[x]++;
            c[y]++;
            if(r[x]==1){
                isFillR.erase(x);
            }
            if(c[y]==1)
                isFillC.erase(y);
        }
        else if(qi == 2){
            int x, y; cin>>x>>y;
            r[x]--;
            c[y]--;
            if(r[x]==0){
                isFillR.insert(x);
            }
                
            if(c[y]==0){
                isFillC.insert(y);
            }
        }
        else{
            int x1, x2, y1, y2; cin>>x1>>y1>>x2>>y2;
            set <int> ::  iterator  it = isFillR.lower_bound(x1);
            if(it==isFillR.end() || *it>x2){
                cout<<"Yes\n";
                continue;
            }
            else{
                set <int> ::  iterator  it1 = isFillC.lower_bound(y1);
                if(it1==isFillC.end() || *it1>y2){
                    cout<<"Yes\n";
                    continue;
                }
            }
            cout<<"No\n";
        }
    }
}