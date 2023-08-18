#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int t;
    cin >> t;
    set<string>st;
    while(t--){
        string s;
        cin >> s;
        st.insert(s);
    }
    int q;
    cin >> q;
    while(q--){
        string s;
        cin >> s;
        auto m = st.find(s);
        if(m != st.end())cout << "yes\n";
        else cout << "no\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
        solve();
    return 0 ;
}