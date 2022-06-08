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
#define case cout << "Case " << case_number << ": ";\
case_number++;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define MAX_INT 1000002
int case_number = 1;

/*---------------------------------------------------------------------------------------------------*/




void solve()
{
    long long a , n , m;
    cin >> a;
    if(a % 2) cout << "Impossible";
    else{
        n = a/2;
        m = 2;
        while(n %2 ==0){
            n /=2;
            m *=2;
        }
        cout << n << ' ' << m;
    }
}

int main()
{
    int n; cin >> n;
    while(n--){
        fast;
        case;
        solve();
        nl;
    }
    return 0;
}

