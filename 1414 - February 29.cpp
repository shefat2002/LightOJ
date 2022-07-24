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
    string sm , em;
    int sd , ed , sy , ey;
    char c;
    cin >> sm >> sd >> c >> sy;
    cin >> em >> ed >> c >> ey;

    if(sm == "January" || (sm == "February" )) sy--;
    if(em == "January" || (em == "February" && ed < 29)) ey--;

    cout << ((ey/4 - sy/4) - (ey/100 - sy/100) + (ey/400 - sy/400));
    
    

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
