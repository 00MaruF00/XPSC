#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template<typename T>using orderded_set = tree<T , null_type , less<T> , rb_tree_tag , tree_order_statistics_node_update>;
typedef long long ll;

void solve()
{
    ll sz , one = 0 , zero = 0;
    cin >> sz;
    for(ll i = 0 ; i < sz ; i++){
        ll a;
        cin >> a;
        if(a == 1)one++;
        else if(a == 0)zero++;
    }
    cout << (1LL << zero)*one <<'\n';
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