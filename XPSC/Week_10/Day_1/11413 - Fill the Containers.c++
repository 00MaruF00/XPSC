#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using orderded_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int sz, container;
    while (cin >> sz >> container)
    {
        int mx = -1, ans;
        int ar[sz];
        for (int i = 0; i < sz; i++)
            cin >> ar[i], mx = max(mx, ar[i]);
        int l = 1, r = INT_MAX;
        while (l <= r)
        {
            int mid = r - (r - l) / 2;
            int sum = 0, counter = 1;
            if (mx > mid)
            {
                l = mid + 1;
                continue;
            }
            for (int i = 0; i < sz; i++)
                if (sum + ar[i] > mid)
                    counter++, sum = ar[i];
                else
                    sum += ar[i];
            if (container < counter)
                l = mid + 1;
            else
                ans = mid, r = mid - 1;
        }
        cout << ans << "\n";
    }

    return 0;
}