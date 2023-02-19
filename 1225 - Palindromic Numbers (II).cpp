#include <bits/stdc++.h>
using namespace std;

#define nl cout << "\n";
#define case cout << "Case " << case_number << ": "; case_number++;
int case_number = 1;

void solve()
{
    string s; cin >> s;
    string r;
    r = s;
    reverse(r.begin() , r.end());
    if(s == r) cout << "Yes";
    else cout << "No";    
}

int main()
{
    int n; cin >> n;
    while(n--){
        case;
        solve();
        nl;
    }
    return 0;
}
