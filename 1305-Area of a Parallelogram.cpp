#include <bits/stdc++.h>
using namespace std;
#define nl cout << "\n";
#define case cout << "Case " << i+1 << ": ";

int main()
{
    int n , i = 0; cin >> n;
    while(n--){
        int ax, ay , bx , by , cx , cy , dx , dy, A;
        cin >> ax >> ay >> bx >> by >> cx >> cy ;
        dx = ax - bx+cx;
        dy = ay - by+cy;
        case; i++;
        A = abs(0.5*(ax*by + bx*cy + cx*dy + dx*ay - bx*ay - cx*by - dx*cy - ax*dy));
        cout << dx << " " << dy << " " << A;
        nl;
    }
    return 0;
}



