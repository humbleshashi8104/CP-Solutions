#include <bits/stdc++.h>
#include <algorithm>
typedef long long ll;
#define PB push_back
#define rep(i, a, b) for(int i = a; i<b; i++)
using namespace std;


void solve(){
    int m, s; cin>>m>>s;
    long long large = 0;
    if(s == 0){
        if(m == 1){
            cout<<0<<" "<<0<<"\n";
            return;
        }
        cout<<-1<<" "<<-1<<"\n";
        return;
    }
    vector <int> v;
    while(s != 0){
        if(s < 9){
            v.push_back(s);
            s = 0;
            continue;
        }
        v.PB(9);
        s-=9;
    }
    if(v.size() > m){
        cout<<-1<<" "<<-1<<"\n";
        return;
    }
    // for(int i = 0; i<v.size(); i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<"\n";
    int re = -1;
    if( v.size() - m > 1){
        cout<<1;
        re = (*(--v.end())) - 1;
        int g = v.size();
        // cout<<"sex"<<g<<"sex\n";
        for(int i = 0; i<m-g-1;i++){
            cout<<0;
        }
        cout<<re;
        for(int i = 0; i<=g-2; i++){
            cout<<v[i];
        }
        cout<<" ";
    }
    else{
        cout<<v[v.size()-1];
        // cout<<"sex"<<m - v.size() - 1<<"\n";
        int g = v.size();
        for(int i = 0; i<m-g;i++){
            cout<<0;
        }
        // cout<<"sex"<<g-1<<"\n";
        for(int i = 0; i<g-1; i++){
            cout<<v[i];
        }
        cout<<" ";
    }
    for(int i = 0; i<v.size(); i++){
        cout<<v[i];
    }
    for(int i = 0; i<m-v.size(); i++){
        cout<<0;
    }
    cout<<"\n";

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
