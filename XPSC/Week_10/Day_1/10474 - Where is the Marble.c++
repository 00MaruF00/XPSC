#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template<typename T>using orderded_set = tree<T , null_type , less<T> , rb_tree_tag , tree_order_statistics_node_update>;
typedef long long ll;

int cs = 1;
int solve()
{
    int sz , q;
    cin >> sz >> q;
    if(!sz && !q)return 1;
    vector<int>ar(sz);
    for(int i = 0 ; i < sz ; i++) cin >> ar[i];
    sort(ar.begin() , ar.end());
    cout << "CASE# "<<cs<<":\n";
    cs++;
    while(q--){
        int x;
        cin >> x;
        auto iter = lower_bound(ar.begin() , ar.end() , x);
        if(iter == ar.end())cout << x <<" not found\n";  
        else if(*iter == x)cout << x << " found at "<<(iter - ar.begin()) + 1 << "\n";
        else cout << x <<" not found\n";
    }
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    while(1)
        if(solve()) break;
    return 0 ;
}