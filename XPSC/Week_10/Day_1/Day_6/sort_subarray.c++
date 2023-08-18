#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int sz , ax , s;
    cin >> sz;
    int ar[sz + 1] , a[sz + 1];
    for(int i = 1 ; i <= sz ; i++) cin >> ar[i];
    for(int i = 1 ; i <= sz ; i++) cin >> a[i];
    for(int i = 1 ; i <= sz ; i++)if(ar[i] != a[i]){
        s = i;
        break;
    }
    while(s != 1 && a[s] >= a[s - 1])
        if(a[s] >= a[s - 1])s--;
    cout << s <<" ";
    for(int i = 1 ; i <= s ; i++)if(ax == a[i]){
        s = i;
        break;
    }
    while(s != sz && a[s] <= a[s + 1])
        if(a[s] <= a[s + 1])s++;
    cout << s <<"\n";
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