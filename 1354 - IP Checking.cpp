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

int dec_to_bin(int a)
{
    long long bin = 0;
    int n = 0;
    while(a){
        bin += (a%2) * pow(10 , n);
        a /=2;
        n++;
    }
    return bin;
}

void solve()
{
    int a[4] , b[4] ;
    char c;
    cin >> a[0] >> c >> a[1] >> c >> a[2] >> c >> a[3];
    cin >> b[0] >> c >> b[1] >> c >> b[2] >> c >> b[3];

    for(int i = 0 ; i  < 4 ; i++){
        a[i] = dec_to_bin(a[i]);
    }
    bool same = true;
    for(int i = 0 ; i < 4 ;i++){
        if(a[i] != b[i]){
            same = false ;
            break;
        }
    }
    if(same == true) cout << YES;
    else cout << NO;

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
