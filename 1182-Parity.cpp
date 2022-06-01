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
