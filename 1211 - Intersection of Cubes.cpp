#include <bits/stdc++.h>
using namespace std;

#define nl cout << "\n";
#define pi (2*acos(0))
#define case cout << "Case " << case_number << ": "; case_number++;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define MAX_INT 1000002
#define YES "Yes"
#define NO "No"

int case_number = 1;

/*----------------------------------------------------------------------------------------------------------------------------------------*/

void file();


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
    file();
    int n; cin >> n;
    while(n--){
    //    fast;
        case;
        solve();
        nl;
    }
    return 0;
}

void file()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r", stdin);
    freopen("out.txt" , "w", stdout);
    #endif
}
