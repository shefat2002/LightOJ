#include <bits/stdc++.h>
using namespace std;
#define nl cout << "\n";
#define ll long long

void solve()
{
    long long hex[10005];
    long long n;
    cin >> hex[0] >> hex[1]>> hex[2]>> hex[3]>> hex[4]>> hex[5] >> n; 
    
    for(int i = 6; i <= n ;i++){
        hex[i] = (hex[i-1]+hex[i-2]+hex[i-3]+hex[i-4]+hex[i-5] +hex[i-6])%10000007;
    }
    cout << hex[n]%10000007;
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