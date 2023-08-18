#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template<typename T>using orderded_set = tree<T , null_type , less<T> , rb_tree_tag , tree_order_statistics_node_update>;
typedef long long ll;

void solve()
{
    string s;
    cin >> s;
    bool ok = true;
    char ch = *min_element(s.begin() , s.end());
    cout << ch <<" ";
    for(auto iter : s){
        if(ch == iter && ok){
            ok = false;
            continue;
        }
        cout << iter ;
    }
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