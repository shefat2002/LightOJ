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
    int n;
    cin >> n;
    for(int i  = 0 ; i < n ; i++){
        double r;
        cin >> r;
        case;
        cout << fixed << setprecision(2) << pow(r*2 , 2) - pi*pow(r,2); nl;
    }
    return 0;
}
