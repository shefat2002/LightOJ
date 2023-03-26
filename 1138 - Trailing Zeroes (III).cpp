//  بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
//  Author: Shefat - shefat2002@gmail.com

#include <bits/stdc++.h>
using namespace std;

#define case                cout << "Case " << case_number << ": "; case_number++;
#define fast                ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define nl                  cout << "\n";
#define ll                  long long
int case_number = 1;
/*
0!=1
1!=1
2!=2
3!=6
4!=24
5!=120
*/
/// 0,0,0,0,0, 1,1,1,1,1, 2,2,2,2,2,.....

ll count(ll n)
{
    ll zeros =0;
    for(ll i =5 ; i <=n ;i*=5){
        zeros +=(n/i);  
    }
    return zeros;
}

void solve()
{
    ll a;
    cin >> a;
    ll l = 1, r = 1e18;
    ll ans =-1;
    while(l<=r){
        ll mid = l + (r-l)/2;
        ll zero = count(mid);
        if(zero>=a){
            r = mid-1;
            if(zero==a) ans = mid;
        }
        else if(zero<a){
            l = mid+1;
        }
    }
    if(ans==-1) cout << "impossible";
    else cout << ans;nl;


}


int main()
{
    // fast;
    int n; 
    cin >> n; while(n--){case;solve();} // Case 
    return 0;
}