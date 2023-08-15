#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template<typename T>using orderded_set = tree<T , null_type , less<T> , rb_tree_tag , tree_order_statistics_node_update>;
typedef long long ll;

void solve()
{
    ll sz , k , counter = 0;
    cin >> sz >> k;
    ll ar[sz];
    for(int i = 0 ; i < sz ; i++) cin >> ar[i];
    sort(ar , ar + sz , greater<ll>());
    ll l = 1 , r = k;
    while(l <= r){
        ll mid = r - (r - l)/2;
        ll ans = mid*(ar[0] + ar[1]);
        if(k == ans) counter = 2*mid , r = mid - 1;
        else if(ans + ar[0] > k ) counter = mid*2 + 1 , l = mid+ 1;
        else if(ans + ar[0] < k)counter = mid*2 + 2 , l = mid + 1;
        else counter = mid + 1 , r = mid - 1;
    }
    cout << counter <<"\n";
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