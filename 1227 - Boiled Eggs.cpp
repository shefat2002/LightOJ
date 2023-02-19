#include <bits/stdc++.h>
using namespace std;

#define nl      cout << "\n";
#define case    cout << "Case " << case_number << ": "; case_number++;
int case_number = 1;

void solve()
{
    int n , p , q;
    cin >> n >> p >> q;
    int weight =0 , cnt = 0;
    for(int i = 0 ; i< n ; i++){
        int a; cin >> a;
        if(cnt + 1 <= p && weight +a <= q){
            weight += a;
            cnt++;
        }
    }
    cout << cnt;

}

int main()
{
    int n; cin >> n;
    while(n--){
        case;
        solve();
        nl;
    }
    return 0;
}
