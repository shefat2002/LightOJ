#include <bits/stdc++.h>
using namespace std;
#define nl cout << "\n";
#define case cout << "Case " << i+1 << ": ";

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n ; i++){
        int a[3];cin >> a[0] >> a[1] >> a[2];
        sort(a,a+3);
        case;
        if(a[2]*a[2] == (a[1]*a[1]+a[0]*a[0]))cout << "yes";
        else cout << "no";
        nl;
    }
    return 0;
}
