#include <bits/stdc++.h>
using namespace std;
#define nl cout << "\n";
#define pi (2*acos(0))
#define case cout << "Case " << i+1 << ": ";

void fast()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
}
int mx(int a , int b , int c)
{
    if(a>b && a>c) return a;
    else if(b > c && b > a) return b;
    else return c;
}

int mn(int a , int b , int c)
{
    if(a<b && a<c) return a;
    else if(b < c && b < a) return b;
    else return c;
}

int md(int a , int b , int c)
{
    if(a<b && a>c || a> b && a < c) return a;
    else if(b < c && b > a || b > c && b < a) return b;
    else return c;
}

int main(int argc , char *argv[])
{
    int n;
    cin >> n;
    for(int i = 0; i < n ; i++){
        int a ,b ,c;
        cin >> a >> b >> c;
        case;
        int o = mx(a , b ,c);
        int h1 =mn(a , b, c);
        int h2 =md(a , b ,c);

        if((pow(o,2) == pow(h1,2) + pow(h2 , 2)) ){
            cout << "yes\n";
        }
        else cout << "no\n";

    }
    return 0;
}
