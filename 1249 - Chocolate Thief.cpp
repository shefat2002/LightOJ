#include <bits/stdc++.h>
using namespace std;

#define nl      cout << "\n";
#define case    cout << "Case " << case_number << ": "; case_number++;
int case_number = 1;

void solve()
{
    int n; cin >> n;
    string s[n];
    int l , w , h , vol[n] , total = 0;
    for(int i = 0 ; i < n ; i++){
        cin >> s[i] >> l >> w >> h;
        vol[i] = l*w*h;
        total += vol[i];
    }
    int div = total /n;
    string thief, victim;
    bool isthere = false;
    for(int i = 0; i < n ; i++){
        if(vol[i] > div){
            thief = s[i];
            isthere = true;
        }
        if(vol[i] < div){
            victim = s[i];
            isthere = true;
        }
    }
    if(isthere) cout << thief << " took chocolate from " << victim;
    else cout << "no thief";

}


int main()
{
    int n; cin >> n;
    while(n--){
        //fast;
        case;
        solve();
        nl;
    }
    return 0;
}
