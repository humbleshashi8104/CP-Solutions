#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n; cin>>n; 
    int k; cin>>k;
    set <int> present;
    vector <int> a (n);
    long long sum = 0;
    for(int i = 0; i<n; i++){
        cin>>a[i];
        present.insert(i);
        sum += a[i];
    }
    
    long long x2;
    for(int i = 0; i<k; i++){
        int t; cin>>t;
        if(t == 1){
            int index, x; cin>>index>>x;
            index--;
            if(present.find(index)!=present.end()){
                sum = sum - a[index] + x;
                a[index] = x;
            }
            else{
                sum = sum - x2 + x;
                a[index] = x;
                present.insert(index);
            }
        }
        else{
            cin>>x2;
            sum = n*x2;
            present.clear();
        }
        cout<<sum<<"\n";
    }
}
 
 
int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 
    solve();
}