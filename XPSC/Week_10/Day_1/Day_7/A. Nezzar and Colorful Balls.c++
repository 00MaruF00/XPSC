#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int sz;
    cin >> sz;
    unordered_map<int , int>mp;
    for(int i=0 ; i < sz ; i++){
        int a;
        cin >> a;
        mp[a]++;
    }
    int mx = -1;
    for(auto iter : mp)mx = max(mx , iter.second);
    cout << mx <<"\n";
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