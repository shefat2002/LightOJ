#include <bits/stdc++.h>
using namespace std;

#define nl      cout << "\n";
#define case    cout << "Case " << case_number << ": "; case_number++;

int case_number = 1;
void solve()
{
    int n; cin >> n;
    int lies = 0, size , temp = 2 , diff;
    while(n--){
        cin >> size;
        diff = size - temp;
        if(diff>0){
            lies += ceil(diff/5.0);
        }
        temp = size;
    }
    cout << lies;

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
