#include <bits/stdc++.h>
using namespace std;

#define nl      cout << "\n";
#define pi      (2*acos(0))
#define case    cout << "Case " << case_number << ": "; case_number++;

int case_number = 1;
void solve()
{
    int n; cin >> n;
    int d= 0;
    while(n--){
        string s; cin >> s;
        if(s == "donate"){
            int a; cin >> a;
            d +=a;
        }
        else if(s == "report"){
            cout << d << endl;
        }
    }
    
}


int main()
{
    int n; cin >> n;
    while(n--){
        case;
        nl;
        solve();
        
    }
    return 0;
}
