#include <bits/stdc++.h>
using namespace std;
int case_number = 1;
#define nl cout << "\n";
#define case cout << "Case " << case_number << ": ";\
case_number++;

void solve()
{
    double v1 , v2 , v3 , a1 , a2, t1, t2 , t3;
    cin >> v1 >> v2 >> v3 >> a1 >> a2;
    t1 = v1/a1; t2 = v2/a2;
    (t1>=t2) ? t3 = t1 : t3 = t2;
    double b = t3*v3;
    double t = (v1*v1)/(2*a1) + (v2*v2)/(2*a2);
    cout << fixed << setprecision(10) << t << " " << b;
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

