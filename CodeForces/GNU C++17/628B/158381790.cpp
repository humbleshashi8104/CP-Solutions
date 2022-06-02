#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<long long> vll;
#define pb push_back
#define rep(i,a,b) for(int i = a; i < b; i++)
#define all(x) x.begin(),x.end()


int main(){
    cin.tie(0); 
    cout.tie(0); 
    ios_base::sync_with_stdio(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 
    string s; cin>>s;
    ll total = 0;
    rep(i,0,s.size()-1){
        int a = (s[i]-'0')*10 + (s[i+1]-'0');
        if(a%4 == 0){
            total+=i+1;
        }
        a = s[i]-'0';
        if(a%4 == 0)
            total++;
    }
    int g = s[s.size()-1] - '0';
    if(g%4 == 0)
        total++;
    cout<<total<<"\n";
}

