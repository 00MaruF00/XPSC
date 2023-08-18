#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int sz , k , ans = -1;
    cin >> sz >> k;
    int ar[sz + 1] = {0};
    for(int i = 1 ; i <= sz ; i++) cin >> ar[i] , ar[i] += ar[i - 1];
    if(ar[sz] < k){
        cout << -1 <<"\n";
        return;
    }
    for(int i = 1 ; i <= sz; i++){
        int l = i , r = sz;
        while(l <= r){
            int mid = l - (l - r)/2;
            int x = ar[mid] - ar[i - 1];
            if(x == k) ans = max(ans , mid - i) , l = mid + 1;
            else if(x < k) l = mid + 1;
            else r = mid - 1;
        }
    }
    cout << max(-1 , sz - ans - 1)<<'\n';
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