#include<bits/stdc++.h>
using namespace std;

void answer(){
    int n, k; cin>>n>>k;
    bool t = false;
    set <int> s;
    for(int i = 0; i<n; i++){
        long long a; cin>>a;
        if(t || a == 0){
            continue;
        }

        int use = 0;
        while(true){
            while(a%k == 0){
                a/=k;
                use++;
            }
            // cout<<use<<" ";
            a--;
            if(s.find(use) != s.end()){
                // cout<<"here\n";
                t = true;
                break;
            }
            s.insert(use);
            // cout<<a<<"\n";
            if((a)%k != 0 || a==0){
                break;
            }
        }
        // cout<<"\n";
        // cout<<t<<"\n";
        // cout<<a<<"\n";
        // for(set<int> :: iterator it = s.begin(); it!=s.end(); it++){
        //     cout<<*it<<" ";
        // }
        // cout<<"\n";
        t = t || a!=0;
    }

    // for(set<int> :: iterator it = s.begin(); it!=s.end(); it++){
    //     cout<<*it<<" ";
    // }
    // cout<<"\n";
    if(t)
        cout<<"NO\n";
    else
        cout<<"YES\n";
}


int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 
    int t;
    cin>>t;
    while(t--)
        answer();
    return 0;
}