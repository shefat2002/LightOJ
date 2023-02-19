#include <bits/stdc++.h>
using namespace std;
#define nl cout << "\n";
#define case cout << "Case " << i+1 << ": ";

int main()
{
    int n;
    cin >> n;
    for(int i  =  0 ; i < n; i++){
        int c =0, a;
        cin >> a;
        while(a){
            c+= a%2;
            a /=2;
        }
        case;

        if(c%2 ==0) cout << "even\n";
        else cout << "odd\n";
    }
    return 0;
}
