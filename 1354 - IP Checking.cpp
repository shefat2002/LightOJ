#include <bits/stdc++.h>
using namespace std;

#define nl      cout << "\n";
#define pi      (2*acos(0))
#define case    cout << "Case " << case_number << ": "; case_number++;

int case_number = 1;
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
    if(same == true) cout << "Yes";
    else cout << "No";

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
