#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <set>
#include <map>
#include <vector>
#include <string>
#include <cmath>
#include <cstring>
#include <queue>
#include <stack>
#include <algorithm>
#include <sstream>
#include <numeric>
#include <ctime>
#include <cctype>
#include <limits>
using namespace std;
#define nl cout << "\n";
#define pi (2*acos(0))
#define case cout << "Case " << case_number << ": "; case_number++;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define MAX_INT 1000002
#define YES "Yes"
#define NO "No"

int case_number = 1;

/*----------------------------------------------------------------------------------------------------------------------------------------*/


void solve()
{
    int c1 , c2 , r1 , r2 , C ,R;
    cin >> r1 >> c1 >> r2 >> c2;

    C = abs(c1 - c2);
    R = abs(r1 - r2);

    if(C == R) cout << 1;
    else if((C & 1) == (R&1)) cout << 2;
    else cout << "impossible";

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

