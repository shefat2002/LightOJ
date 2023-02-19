#include <bits/stdc++.h>
#include <limits>
using namespace std;
#define nl cout << "\n";
#define pi (2*acos(0))
#define case cout << "Case " << case_number << ": ";\
case_number++;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define MAX_INT 1000002
int case_number = 1;

void solve()
{
    double R  , n;
    cin >> R >> n;
    double r = (sin(pi/n)*R)/(1+(sin(pi/n)));
    cout << setprecision(10) << r;

}

int main()
{
    int n; cin >> n;
    while(n--){
        fast;
        case;
        solve();
        nl;
    }
    return 0;
}

