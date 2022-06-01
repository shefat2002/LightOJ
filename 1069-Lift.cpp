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
    for(int i = 0; i  < n ; i++){
        int a ,b ;
        cin >> a >> b;
        case;
        int c = abs(a-b);
        cout << 4*c + 19 + 4*a << endl;
    }

    return 0;
}
