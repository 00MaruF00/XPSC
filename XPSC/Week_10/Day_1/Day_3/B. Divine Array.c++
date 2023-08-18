#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int sz;
    cin >> sz;
    int ar[sz];
    map<int , vector<int>>v;
    for(int i = 0 ; i < sz ; i++)cin >> ar[i] , v[0].push_back(ar[i]);
    for(int i = 0 ; i < 20 ; i++){
        unordered_map<int , int>mp;
        for(int j = 0 ; j < sz ; j++)mp[ar[j]]++;
        for(int j = 0 ; j < sz ; j++){
            v[i + 1].push_back(mp[ar[j]]);
            ar[j] = mp[ar[j]];
        }
    }
    int q;
    cin >> q;
    while(q--){
        int a , b;
        cin >> a >> b;
        if(b > 15)cout << v[15][a-1] <<"\n";
        else cout << v[b][a-1] <<"\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin >> test;
    while(test--)
        solve();
    return 0 ;
}