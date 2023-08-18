#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int sz ;
    cin >> sz;
    int ar[sz];
    bool ok = false;
    for(int i = 0 ; i < sz ; i++) cin >> ar[i];
    for(int i = 1 ; i < sz - 1 ; i++){
        if(ar[i] < ar[i - 1])ok = true;
        if(ok && ar[i] < ar[i + 1]){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";     
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