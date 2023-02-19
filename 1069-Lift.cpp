#include <bits/stdc++.h>
using namespace std;
#define nl cout << "\n";
#define case cout << "Case " << i+1 << ": ";

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i  < n ; i++){
        int a ,b ;
        cin >> a >> b;
        case;
        int c = abs(a-b);
        cout << 19 + 4*(a+c) << endl;
    }

    return 0;
}
