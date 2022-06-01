#include <bits/stdc++.h>
using namespace std;
#define nl cout << "\n";
#define pi (2*acos(0))
#define case cout << "Case " << i+1 << ": ";

void fast()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
}

int main() {
    int n , a , b = 0;
    cin  >> n ;
    while(n--){
        int a;
        cin >> a;
        b = 0;
        if(a>10){
            b = a - 10;
            a = 10;
        }
        cout << a << " " << b ;
        nl;
    }
    return 0;
}
