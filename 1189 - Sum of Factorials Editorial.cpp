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

ll f[20];

void factorial(ll f[])
{
    f[0] = 1;
    for(ll i = 1 ; i<21 ;i++){
        f[i] = f[i-1] * i;
    }
}


void solve()
{
    ll n;
    cin >> n;
    vector<int> v;
    for(int i = 20 ; i >=0 ; i--){
        if(f[i] <=n){
            n -=f[i];
            v.push_back(i);
        }
    }
    if(n == 0){
        for(int i = v.size() -1; i>0 ;i--){
            cout << v[i] << "!+";
        }
        cout << v[0] << "!";
    }
    else cout << "impossible";
}

int t;

int main()
{
    file();
    factorial(f);
    //int n; cin >> n;
    cin >> t;
    while(t--){
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
