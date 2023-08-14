#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template<typename T>using orderded_set = tree<T , null_type , less<T> , rb_tree_tag , tree_order_statistics_node_update>;
typedef long long ll;

void solve()
{
    int sz , k , ans;
    cin >> sz >> k;
    int ar[sz];
    for(int i = 0 ;i < sz ; i++) cin >> ar[i];
    sort(ar , ar + sz);
    int l = 1 , r = 10;
    while(l <= r){
        int mid = r - (r - l)/2;
        int start = ar[0] , counter = 1;
        for(int i = 1 ; i < sz ; i++)
            if(start+mid <= ar[i])counter++ , start = ar[i];
        if(counter < k) r = mid - 1;
        else ans = mid  , l = mid + 1;
    }
    cout << ans <<"\n";
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