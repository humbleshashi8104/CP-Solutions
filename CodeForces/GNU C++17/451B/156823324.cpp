#include <bits/stdc++.h>
#include <algorithm>
typedef long long ll;
typedef long long ll;
#define PB push_back
#define REP(i, a, b) for(int i = a; i<b; i++)
using namespace std;

void sort(vector <int> &a, int l, int r){  
    pair<int, int> v;
    bool flag = false;
    for(int i = l; i<r-1; i++){
        int j = i;
        while(j<r-1 && a[j] > a[j+1]){
            j++;
        }
        if(i != j){
            v = make_pair(i, j+1);
            break;
        }   
    }
    reverse(a.begin()+v.first, a.begin()+v.second);
    if(is_sorted(a.begin(), a.end())){
        cout<<"yes\n";
        cout<<v.first+1<<" "<<v.second<<"\n";
        return;
    }
    cout<<"no\n";
}   

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 
    int n; cin>>n;
    vector <int> a (n);
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    if(is_sorted(a.begin(), a.end())){
        cout<<"yes\n";
        cout<<1<<" "<<1<<"\n";
        return 0;
    }
    sort(a, 0, n);
}
