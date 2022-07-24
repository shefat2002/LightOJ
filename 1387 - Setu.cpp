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
    file();
    int n; cin >> n;
    while(n--){
        //fast;
        case;
        nl;
        solve();
        
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
