#include <bits/stdc++.h>
using namespace std;

#define ll      long long
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

double mem[MAX_INT];
void fact()
{
    mem[0] = 0;
    for(int i = 1 ; i < MAX_INT ; i++){
        mem[i] = mem[i-1] + log(i);
    }
    
}

void solve()
{
    int n , b; cin >> n >> b;

    ll a = mem[n]/log(b) +1;
    cout << a;
    
    
}


int main()
{
    file();
    fact();
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
