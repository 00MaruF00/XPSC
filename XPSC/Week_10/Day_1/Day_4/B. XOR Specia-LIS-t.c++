#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int sz;
    cin >> sz;
    int ar[sz];
    for(int i = 0 ; i < sz ; i++) cin >> ar[i];
    bool ok = false;
    for(int i = 1 ; i < sz ; i++)if(ar[i] <= ar[i - 1])ok = true;
    if(ok)cout << "YES\n";
    else if((sz&1) == 0) cout << "YES\n";
    else cout << "NO\n";
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