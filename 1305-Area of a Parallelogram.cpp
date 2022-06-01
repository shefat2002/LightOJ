#include <bits/stdc++.h>
using namespace std;
#define nl cout << "\n";
#define pi (2*acos(0))
#define case cout << "Case " << i+1 << ": ";

void fast()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
}

int main(int argc , char *argv[])
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



