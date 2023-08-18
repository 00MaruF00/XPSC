#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template<typename T>using orderded_set = tree<T , null_type , less<T> , rb_tree_tag , tree_order_statistics_node_update>;
typedef long long ll;

void solve()
{
    int sz;
    cin >> sz;
    int ar[sz] , arr[sz] , ans[sz] , mx = -3e9;
    for(int i = 0 ; i < sz; i++) cin >> ar[i];
    for(int i = 0 ; i < sz; i++) cin >> arr[i];
    for (int i = 0; i < sz ; i++) ans[i] = ar[i]-arr[i] , mx = max(ans[i] , mx);
    vector<int>    v;
    for(int i = 0 ; i < sz; i++)if(ans[i] == mx)v.push_back(i+1);
    cout << v.size() <<"\n";
    for(int iter : v)cout << iter <<" ";
    cout << "\n";
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