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
    vector<int>ar(sz);
    for(int i = 0 ; i < sz ; i++) cin >> ar[i];
    sort(ar.begin() , ar.end());
    int q;
    cin >> q;
    while(q--){
        int x;
        cin >> x;
        auto iter = lower_bound(ar.begin() , ar.end() , x);
        auto it = upper_bound(ar.begin() , ar.end() , x);
        if(iter == ar.begin())cout <<"X ";
        else cout << ar[iter - ar.begin() - 1] <<" ";
        if(it == ar.end())cout << "X\n";
        else cout << *it <<"\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
        solve();
    return 0 ;
}