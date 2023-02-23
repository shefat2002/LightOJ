#include <bits/stdc++.h>
using namespace std;

#define ll      long long
#define nl      cout << "\n";
#define case    cout << "Case " << case_number << ": "; case_number++;

int case_number = 1;


void solve()
{
    double ab, ac, bc, r;
    cin >> ab >> ac >> bc >> r;
    cout << fixed << setprecision(15) << sqrt(r/(r+1))*ab;

}


int main()
{
    int n; 
    cin >> n; while(n--){case;solve();nl;}

    return 0;
}