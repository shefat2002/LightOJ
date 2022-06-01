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
    for(int i = 0 ; i < n; i++){
        cout << "Case " << i+1 << ":\n";
        int p , q , r ,s;
        cin >> p >> q >> r>> s;
        int a;
        cin >> a;
        for(int j = 0 ; j < a ; j++){
            int x , y;
            cin >> x >> y;

            if(x < p || y < q || x > r || y > s) cout << "No\n";
            else cout << "Yes\n" ;
        }

    }
    return 0;
}


