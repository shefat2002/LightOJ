#include <bits/stdc++.h>
using namespace std;
#define nl cout << "\n";

void solve()
{
    long long s , x , y;
    cin >> s;
    long long root = ceil(sqrt(s*1.0));
    long long extra = root*root -s;
    if(extra < root){
        y = root;
        x = extra +1;
    }
    else{
        x = root;
        y = s - (root-1)*(root-1);
    }
    if(root% 2 == 0){
        long long t = x;
        x = y;
        y = t;
    }

    cout << x << " " << y;

}

int main()
{
    int n; cin >> n;
    while(n--){
        solve();
        nl;
    }
    return 0;
}

