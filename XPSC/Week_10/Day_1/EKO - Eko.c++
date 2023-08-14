#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template<typename T>using orderded_set = tree<T , null_type , less<T> , rb_tree_tag , tree_order_statistics_node_update>;
typedef long long ll;

void solve()
{
    ll sz , wood;
    cin >> sz >> wood;
    ll ar[sz];
    for(int i = 0 ; i < sz ; i++) cin >> ar[i];
    ll ans , l = 1 , r = 1e10;
    while(l <= r){
        ll mid = r - (r - l) / 2;
        ll sum = 0;
        for(int i = 0 ; i < sz; i++)
            sum += max(0LL , ar[i] - mid);
        if(sum < wood) r = mid - 1;
        else ans = mid ,  l= mid + 1;
    }
    cout << ans <<"\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
        solve();
    return 0 ;
}