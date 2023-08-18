#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll sz , idx = 1 , x ,a=0; cin >> sz;
    for(int i = 1 ; i <= sz ; i++){
        cin >> x;
        if(x > idx) a += (x - idx) , idx = x;
        idx++;
    }
    cout << a <<"\n";
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