#include <bits/stdc++.h>
using namespace std;

#define nl      cout << "\n";
#define pi      (2*acos(0))
#define case    cout << "Case " << case_number << ": "; case_number++;
#define fast    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define MAX_INT 1000002
#define YES     "Yes"
#define NO      "No"

int case_number = 1;
void file();
/*----------------------------------------------------------------------------------------------------------------------------------------*/


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
    file();
    int n; cin >> n;
    while(n--){
        //fast;
        case;
        solve();
        nl;
    }
    return 0;
}

void file()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r", stdin);
    freopen("out.txt" , "w", stdout);
    #endif
}
