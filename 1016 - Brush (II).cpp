#include <bits/stdc++.h>
using namespace std;
#define nl cout << "\n"
#define ll long long

void solve()
{
    ll n,w;cin >> n>> w;
    ll x[n],y[n];
    for(int i =0; i  < n ;i++){
        cin >> x[i] >> y[i];
    }
    sort(y,y+n);
    int cnt=1;
    ll p = y[0]+w;
    for(int i =0;i < n ;i++){
        if(y[i] <=p)continue;
        p = y[i]+w;
        cnt++;
    }
    cout << cnt;nl;
}

int main()
{
  
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n,i=1;
    // solve();
    cin >> n;while(n--){cout << "Case " << i++ << ": ";solve();}

    return 0;
}
