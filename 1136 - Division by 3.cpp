#include <bits/stdc++.h>
using namespace std;
#define nl cout << "\n";
#define case cout << "Case " << case_number << ": "; case_number++;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int case_number = 1;

long long divisible(long long n)
{
    int div;
    if(n==0) return 0;
    
    if(n%3 == 0) div = (n/3);
    else div = (n/3)+1;
    
    return n- div;
}


void solve()
{
    long long a , b;
    cin >> a >> b;
    cout << (divisible(b) - divisible(a-1));

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

