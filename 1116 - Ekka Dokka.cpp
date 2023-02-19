#include <bits/stdc++.h>
using namespace std;
#define nl cout << "\n";
#define ll long long

void solve()
{
    ll n;cin >> n;
    if(n&1)cout << "Impossible";
    else{
        ll a= n/2;
        ll b= 2;
        while(a%2==0){
            a/=2;
            b*=2;
        }
        cout << a << ' '<< b;
    }
}

int main()
{
	int n;cin >> n;
    int i =0;
    while(n--){
        cout << "Case " << ++i << ": ";
        solve();
        nl;
    }

}