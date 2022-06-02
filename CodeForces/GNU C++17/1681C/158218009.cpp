#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

#define PI 3.1415926535897932384626433832795l 
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

 
void solve(){
    int n; cin>>n;
    vector<int> v1(n);
    vector<int> v2(n);
    for(int i = 0; i<n; i++){
        cin>>v1[i];
    }
    for(int i = 0; i<n; i++){
         cin>>v2[i];
    }

    vector<pair<int, int> > combine(n);  
    for(int i = 0; i<n; i++){
        combine[i] = make_pair(v1[i], v2[i]);
    }
    vector<pair<int, int> > answer;
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - 1; j++)
            if (combine[j].first > combine[j + 1].first){
                swap(combine[j], combine[j + 1]);   
                answer.push_back(make_pair(j+1, j+2));
            }
 
    vector <int> second;
    for(int k = 0; k<n; k++){
        vector<int> v3;
        int g = k;
        v3.push_back(combine[g].second);
        
        while(combine[g+1].first == combine[g].first){
            if(g+1 == n){
                break;
            }
            v3.push_back(combine[g+1].second);
            g++;
        }
        
        for (int i = 0; i < v3.size() - 1; i++)
            for (int j = 0; j < v3.size() - 1; j++)
                if (v3[j] > v3[j+1]){
                    swap(v3[j], v3[j + 1]);   
                    answer.push_back(make_pair(k+j+1, k+j+2));
                }
        k = g;
        second.insert(second.end(), v3.begin(), v3.end());
    }
    for(int i = 0; i<n-1; i++){
        if(second[i+1]<second[i]){
            cout<<-1<<"\n";
            return;
        }
    }
    if(answer.size()>1e4){
        cout<<-1<<"\n";
        return;
    }
    cout<<answer.size()<<"\n";
    for(int i = 0; i<answer.size(); i++){
        cout<<answer[i].first<<" "<<answer[i].second<<"\n";
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
 