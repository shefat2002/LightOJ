#include <bits/stdc++.h>
using namespace std;
#define nl cout << "\n";
#define case cout << "Case " << case_number << ": "; case_number++;
int case_number = 1;

void solve()
{
    int n;
    cin >> n;
    int x1, y1 , z1 , x2, y2 , z2;
    int xf = 0 , yf =0 , zf =0 , xn = 9999 , yn = 9999 , zn = 9999 , x , y , z;
    for(int i = 0 ; i < n; i++){
        cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
        if(x1 > xf) xf = x1;
        if(y1 > yf) yf = y1;
        if(z1 > zf) zf = z1;
        if(x2 < xn) xn = x2;
        if(y2 < yn) yn = y2;
        if(z2 < zn) zn = z2;
    }
    x = xn - xf;
    y = yn - yf;
    z = zn - zf;
    if(x >0 && y > 0 && z > 0) cout << x*y*z;
    else cout << 0;


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
